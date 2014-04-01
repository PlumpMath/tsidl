///<reference path='../typings/node/node.d.ts'/>
///<reference path='../typings/nomnom/nomnom.d.ts'/>
///<reference path='../lib/ts.d.ts'/>

import nomnom = require('nomnom');
import assert = require('assert');

enum ErrorCode {
    MultipleFiles = 1000,
    CouldNotReadFile = 1001,
    CantOpenOutputFile = 1002,
    NotADeclareFile = 1003,
    UnexpectedDeclaration = 1004,
    UnsupportedType = 1005,
    OverloadingNotAllowed = 1006,
    NoFiles = 1007,
    ExternalModulesNotAllowed = 1008,
    ClassExtensionNotAllowed = 1009,
    UnexpectedModifier = 1010,
    PrivateMembersNotAllowed = 1011,
    StaticMembersNotAllowed = 1012,
    NonFunctionAnonymousTypesNotAllowed = 1013,
    IndexersNotAllowed = 1014,
    CallAndConstructNotAllowed = 1015,
    //CallInNonAnonymousTypeNotAllowed = 1016,
    ConstructInNonAnonymousTypeNonClassNotAllowed = 1017,
    InternalError = 1018,
    GenericsNotAllowed = 1019,
    ExternalTypesNotAllowed = 1020
};

var errorMessage: any =
    {
        /* MultipleFiles */ 1000: "Only one input file may be specified.",
        /* CouldNotReadFile */ 1001: "Could not read file '{0}'.",
        /* CantOpenOutputFile */ 1002: "Could not open output file '{0}'.",
        /* NotADeclareFile */ 1003: "Script is not a declare file.",
        /* UnexpectedDeclaration */ 1004: "Unexpected declaration type {0}.",
        /* UnsupportedType */ 1005: "Unsupported type.",
        /* OverloadingNotAllowed */ 1006: "Overloading not allowed.",
        /* NoFiles */ 1007: "An input file must be specified.",
        /* ExternalModulesNotAllowed */ 1008: "Script cannot be an external module.",
        /* ClassExtensionNotAllowed */ 1009: "Class inheritance is not allowed.",
        /* UnexpectedModifier */ 1010: "Unexpected modifier {0}.",
        /* PrivateMembersNotAllowed */ 1011: "Private members are not allowed.",
        /* StaticMembersNotAllowed */ 1012: "Static members are not allowed.",
        /* NonFunctionAnonymousTypesNotAllowed */ 1013: "Anonymous types that are not pure function types are not allowed.",
        /* IndexersNotAllowed */ 1014: "Indexers are not allowed.",
        /* CallAndConstructNotAllowed */ 1015: "Types that declare call signatures and constructor signatures are not allowed.",
        ///* CallInNonAnonymousTypeNotAllowed */ 1016: "Non-anonymous types cannot declare a call signature.",
        /* ConstructInNonAnonymousTypeNonClassNotAllowed */ 1017: "Constructors can only be declared in classes and anonymous types.",
        /* InternalError */ 1018: "Internal error.",
        /* GenericsNotAllowed */ 1019: "Generics are not allowed.",
        /* ExternalTypesNotAllowed */ 1020: "Externally declared types are not allowed."
    };

function formatString(value: string, substitutions: string[]): string {
    return value.replace(/{(\d+)}/g,
        (match: string, ...args: any[]) => typeof substitutions[args[0]] != 'undefined' ? substitutions[args[0]] : match);
}

function reportGenericError(error: number, ...substitutions: string[]): void {
    console.error("tsidl: error TS" + error.toString() + ": " + formatString(errorMessage[error], substitutions));
}

function reportError(document: TypeScript.Document, position: number, error: number, ...substitutions: string[]): void {
    var origin: string = document.fileName;

    if (position !== -1) {
        var lineAndCharacter = document.lineMap().getLineAndCharacterFromPosition(position);
        origin += "(" + lineAndCharacter.line().toString() + "," + lineAndCharacter.character().toString() + ")";
    }

    console.error(origin + ": error TS" + error.toString() + ": " + formatString(errorMessage[error], substitutions));
}

function compile(source: string, path: string, ioHost: TypeScript.IIO): TypeScript.Document {
    if (source == null) {
        return null;
    }
    var hasErrors: boolean = false;

    function addDiagnostic(diagnostic: TypeScript.Diagnostic) {
        var diagnosticInfo = diagnostic.info();
        if (diagnosticInfo.category === TypeScript.DiagnosticCategory.Error) {
            hasErrors = true;
        }

        if (diagnostic.fileName()) {
            ioHost.stderr.Write(diagnostic.fileName() + "(" + (diagnostic.line() + 1) + "," + (diagnostic.character() + 1) + "): ");
        }

        ioHost.stderr.WriteLine(diagnostic.message());
    }

    var compilerFilePath = ioHost.getExecutingFilePath();
    var containingDirectoryPath = ioHost.dirName(compilerFilePath);
    var libraryFilePath = ioHost.resolvePath(containingDirectoryPath + "/" + "lib.d.ts");
    var library: string = ioHost.readFile(libraryFilePath, null).contents;

    var compiler: TypeScript.TypeScriptCompiler = new TypeScript.TypeScriptCompiler();

    compiler.addFile(libraryFilePath, TypeScript.ScriptSnapshot.fromString(library), TypeScript.ByteOrderMark.None, 0, false);
    compiler.getSyntacticDiagnostics(libraryFilePath).forEach(d => addDiagnostic(d));
    compiler.getSemanticDiagnostics(libraryFilePath).forEach(d => addDiagnostic(d));

    compiler.addFile(path, TypeScript.ScriptSnapshot.fromString(source), TypeScript.ByteOrderMark.None, 0, false);
    compiler.getSyntacticDiagnostics(path).forEach(d => addDiagnostic(d));
    compiler.getSemanticDiagnostics(path).forEach(d => addDiagnostic(d));

    // ReSharper disable once ConditionIsAlwaysConst
    // ReSharper disable once HeuristicallyUnreachableCode
    return hasErrors ? null : compiler.getDocument(path);
}

function clean(path: string): string {
    return path.replace("\"", "").replace("'", "").replace("'", "").replace("\"", "").replace(/\\/g, "/");
}

function getFileNameWithoutExtension(path: string): string {
    var pathComponents: string[] = clean(path).split("/");
    var fullFileName: string = pathComponents[pathComponents.length - 1];
    var fileNameComponents: string[] = fullFileName.split(".");

    if (fileNameComponents[fileNameComponents.length - 1] != "") {
        return fileNameComponents.slice(0, fileNameComponents.length - 1).join(".");
    }
    else {
        return fullFileName;
    }
}

//function getFileName(path: string): string {
//    var pathComponents: string[] = clean(path).split("/");
//    return pathComponents[pathComponents.length - 1];
//}

//function isAnonymous(type: TypeScript.Type): boolean
//{
//    return (type.symbol.name && (type.symbol.name == "_anonymous" || type.symbol.name == "_construct")) ||
//           (type.symbol.declAST && type.symbol.declAST.nodeType == TypeScript.NodeType.FuncDecl);
//}

//function javaScriptFunctionType(container: TypeScript.Type, signature: TypeScript.Signature): string
//{
//    var result: string = "jsrt::function<" + typeStringNative(container, signature.returnType.type);
//    for (var index: number = 0; index < signature.parameters.length; index++)
//    {
//        result += ", ";
//        var parameter: TypeScript.ParameterSymbol = signature.parameters[index];
//        var isRest: boolean = signature.hasVariableArgList && (index == signature.parameters.length - 1);

//        result += typeStringNative(container, parameter.getType(), parameter.isOptional(), isRest);
//    }
//    result += ">";
//    return result;
//}

//function typeStringNative(container: TypeScript.Type, type: TypeScript.Type, isOptional: boolean = false, isRest: boolean = false): string
//{
//    var typeString: string;

//    if (type.primitiveTypeClass == TypeScript.Primitive.Boolean)
//    {
//        typeString = "bool";
//    }
//    else if (type.primitiveTypeClass == TypeScript.Primitive.Double)
//    {
//        typeString = "double";
//    }
//    else if (type.primitiveTypeClass == TypeScript.Primitive.String)
//    {
//        typeString = "std::wstring";
//    }
//    else if (type.primitiveTypeClass == TypeScript.Primitive.Void)
//    {
//        typeString = "void";
//    }
//    else if (type.primitiveTypeClass == TypeScript.Primitive.Any)
//    {
//        typeString = "jsrt::object";
//    }
//    else if (type.isArray())
//    {
//        typeString = "jsrt::array<" + typeStringNative(container, type.elementType) + ">";
//    }
//    else if (isAnonymous(type) || type.isClass())
//    {
//        if (type.call)
//        {
//            typeString = javaScriptFunctionType(container, type.call.signatures[0]);
//        }
//        else
//        {
//            typeString = javaScriptFunctionType(container, type.construct.signatures[0]);
//        }
//    }
//    else
//    {
//        var name: string = type.getTypeName() + "_proxy";
//        var symbol: TypeScript.Symbol = type.symbol;

//        while ((container && symbol.container != container.symbol && symbol.container.name != TypeScript.globalId) ||
//            (!container && symbol.container.name != TypeScript.globalId))
//        {
//            symbol = symbol.container;
//            name = symbol.name + "_proxy::" + name;
//        }

//        typeString = name;
//    }

//    if (isOptional)
//    {
//        typeString = "jsrt::optional<" + typeString + ">";
//    }
//    else if (isRest)
//    {
//        typeString = "jsrt::rest<" + typeString + ">";
//    }

//    return typeString;
//}

//function writeFieldDeclaration(container: TypeScript.Type, name: string, type: TypeScript.Type, headerFile: IO.FileWriter): void
//{
//    var fieldTypeName: string = typeStringNative(container, type);

//    headerFile.write("\r\n\
//\r\n\
//    " + fieldTypeName + " __stdcall " + name + "()\r\n\
//    {\r\n\
//        return get_property<" + fieldTypeName + ">(jsrt::property_id::create(L\"" + name + "\"));\r\n\
//    }\r\n\
//\r\n\
//    void __stdcall set_" + name + "(" + fieldTypeName + " value)\r\n\
//    {\r\n\
//        set_property(jsrt::property_id::create(L\"" + name + "\"), value);\r\n\
//    }\r\n\
//\r\n\
//    jsrt::property_descriptor<" + fieldTypeName + "> __stdcall " + name + "_descriptor()\r\n\
//    {\r\n\
//        return get_own_property_descriptor<" + fieldTypeName + ">(jsrt::property_id::create(L\"" + name + "\"));\r\n\
//    }\r\n\
//\r\n\
//    bool __stdcall set_" + name + "_descriptor(jsrt::property_descriptor<" + fieldTypeName + "> descriptor)\r\n\
//    {\r\n\
//        return define_property(jsrt::property_id::create(L\"" + name + "\"), descriptor);\r\n\
//    }");
//}

//function writeTypeMemberDeclarations(container: TypeScript.Type, members: TypeScript.ScopedMembers, filter: (symbol: TypeScript.Symbol) => boolean, headerFile: IO.FileWriter): void
//{
//    var allMembers: TypeScript.IHashTable = members.allMembers;
//    var memberNames: string[] = allMembers.getAllKeys();
//    for (var index = 0; index < memberNames.length; index++)
//    {
//        var memberName: string = memberNames[index];
//        if (!filter || filter(<TypeScript.Symbol>allMembers.lookup(memberName)))
//        {
//            writeFieldDeclaration(container, memberName, (<TypeScript.Symbol>allMembers.lookup(memberName)).getType(), headerFile);
//        }
//    }
//}

//function writeNestedTypeDeclarations(members: TypeScript.ScopedMembers, headerFile: IO.FileWriter): void
//{
//    var allMembers: TypeScript.IHashTable = members.allMembers;
//    var memberNames: string[] = allMembers.getAllKeys();

//    if (memberNames.length > 0)
//    {
//        headerFile.writeLine();
//    }

//    for (var index = 0; index < memberNames.length; index++)
//    {
//        var memberName: string = memberNames[index];
//        var type: TypeScript.Type = (<TypeScript.Symbol>allMembers.lookup(memberName)).getType();
//        if (type.isClass())
//        {
//            type = type.instanceType;
//        }
//        writeTypeDeclaration(type, headerFile);
//    }
//}

//function writePrototypeDeclaration(type: TypeScript.Type, headerFile: IO.FileWriter): void
//{
//    var symbol: TypeScript.Symbol = type.symbol;

//    headerFile.write("\r\n\
//class prototype_proxy: public jsrt::object\r\n\
//{\r\n\
//public:\r\n\
//    prototype_proxy() :\r\n\
//        jsrt::object()\r\n\
//    {\r\n\
//    }\r\n\
//\r\n\
//    explicit prototype_proxy(jsrt::object object) :\r\n\
//        jsrt::object(object.handle())\r\n\
//    {\r\n\
//    }");

//    function isMember(symbol: TypeScript.Symbol): boolean
//    {
//        return symbol.kind() == TypeScript.SymbolKind.Type && (<TypeScript.TypeSymbol>symbol).isMethod;
//    }

//    writeTypeMemberDeclarations(type, type.members, isMember, headerFile);
//    writeTypeMemberDeclarations(type, type.ambientMembers, isMember, headerFile);

//    headerFile.write("\r\n};");
//}

//function writeTypeImplements(type: TypeScript.Type, implementsList: TypeScript.Type[], headerFile: IO.FileWriter): void
//{
//    var typeName: string = type.symbol.name + "_proxy";

//    for (var index = 0; index < implementsList.length; index++)
//    {
//        var implementedType: TypeScript.Type = implementsList[index];
//        var implementedTypeName: string = implementedType.symbol.name + "_proxy";

//        headerFile.write("\r\n\
//    " + typeName + "(" + implementedTypeName + " value) :\r\n\
//        jsrt::object(value.handle())\r\n\
//    {\r\n\
//    }");

//        headerFile.write("\r\n\
//\r\n\
//    operator " + implementedTypeName + "()\r\n\
//    {\r\n\
//        return " + implementedTypeName + "(*this);\r\n\
//    }");
//    }
//}

//function writeTypeDeclaration(type: TypeScript.Type, headerFile: IO.FileWriter): void
//{
//    var symbol: TypeScript.Symbol = type.symbol;
//    var typeName: string = symbol.name + "_proxy";
//    var declarationName: string = typeName;
//    var baseName: string = "jsrt::object";

//    if (type.call)
//    {
//        baseName = javaScriptFunctionType(null, type.call.signatures[0]);
//    }

//    headerFile.write("\r\n\
//class " + declarationName + ": public " + baseName + "\r\n\
//{\r\n\
//public:\r\n\
//    " + typeName + "() :\r\n\
//        " + baseName + "()\r\n\
//    {\r\n\
//    }\r\n\
//\r\n\
//    explicit " + typeName + "(jsrt::object object) :\r\n\
//        " + baseName + "(object.handle())\r\n\
//    {\r\n\
//    }");

//    if (type.call)
//    {
//        headerFile.write("\r\n\
//\r\n\
//    " + typeName + "(Signature signature) :\r\n\
//        " + baseName + "(signature)\r\n\
//    {\r\n\
//    }");
//    }

//    if (type.isClassInstance())
//    {
//        writePrototypeDeclaration(type, headerFile);
//        headerFile.writeLine();

//        headerFile.write("\r\n\
//\r\n\
//    prototype_proxy prototype_object()\r\n\
//    {\r\n\
//        return prototype_proxy(prototype);\r\n\
//    }\r\n\
//\r\n\
//    void set_prototype_object(prototype_proxy prototype)\r\n\
//    {\r\n\
//        this->prototype = prototype;\r\n\
//    }");
//    }

//    if (type.implementsList && type.implementsList.length > 0)
//    {
//        writeTypeImplements(type, type.implementsList, headerFile);
//    }

//    if (type.extendsList && type.extendsList.length > 0)
//    {
//        writeTypeImplements(type, type.extendsList, headerFile);
//    }

//    if (type.isModuleType())
//    {
//        var moduleType: TypeScript.ModuleType = <TypeScript.ModuleType>type;

//        writeNestedTypeDeclarations(moduleType.enclosedTypes, headerFile);
//        writeNestedTypeDeclarations(moduleType.ambientEnclosedTypes, headerFile);
//    }

//    writeTypeMemberDeclarations(type, type.members, null, headerFile);
//    writeTypeMemberDeclarations(type, type.ambientMembers, null, headerFile);

//    headerFile.write("\r\n};");
//}

//function writeTypeForwardDeclarations(types: TypeScript.Type[], headerFile: IO.FileWriter): void
//{
//    if (types.length == 0)
//    {
//        return;
//    }

//    headerFile.writeLine();

//    for (var index: number = 0; index < types.length; index++)
//    {
//        headerFile.write("\r\nclass " + types[index].symbol.name + "_proxy;");
//    }
//}

//function writeScriptDeclaration(baseName: string, script: TypeScript.Script, types: TypeScript.Type[], headerFile: IO.FileWriter): void
//{
//    // We only want the types that are named top-level declarations. (And we don't want the class containers, just the instance types.)
//    types = types.filter(
//        (type: TypeScript.Type) => 
//            !isAnonymous(type) && 
//            !type.isClass() &&
//            type.symbol.container.name == TypeScript.globalId);

//    writeTypeForwardDeclarations(types.filter((type: TypeScript.Type) => type.symbol.container.name == TypeScript.globalId), headerFile);

//    if (types.length > 0)
//    {
//        for (var index: number = 0; index < types.length; index++)
//        {
//            var type: TypeScript.Type = types[index];
//            headerFile.writeLine();
//            writeTypeDeclaration(type, headerFile);
//        }
//    }

//    if (types.length > 0)
//    {
//        headerFile.writeLine();
//    }

//    headerFile.write("\r\n\r\n\
//class " + baseName + "_global_proxy: public jsrt::object\r\n\
//{\r\n\
//public:\r\n\
//    " + baseName + "_global_proxy() :\r\n\
//        jsrt::object()\r\n\
//    {\r\n\
//    }\r\n\
//\r\n\
//    explicit " + baseName + "_global_proxy(jsrt::object object) :\r\n\
//        jsrt::object(object.handle())\r\n\
//    {\r\n\
//    }");

//    for (var index: number = 0; index < script.bod.members.length; index++)
//    {
//        var ast: TypeScript.AST = script.bod.members[index];

//        switch (ast.nodeType)
//        {
//            case TypeScript.NodeType.VarDecl:
//                writeFieldDeclaration(null, (<TypeScript.VarDecl>ast).id.text, ast.type, headerFile);
//                break;

//            case TypeScript.NodeType.FuncDecl:
//                writeFieldDeclaration(null, (<TypeScript.FuncDecl>ast).name.text, ast.type, headerFile);
//                break;

//            case TypeScript.NodeType.ES6Class:
//                writeFieldDeclaration(null, (<TypeScript.ES6ClassDecl>ast).name.text, ast.type, headerFile);
//                break;

//            case TypeScript.NodeType.Module:
//                writeFieldDeclaration(null, (<TypeScript.ModuleDecl>ast).name.text, ast.type, headerFile);
//                break;

//            case TypeScript.NodeType.Interface:
//            case TypeScript.NodeType.Empty:
//            default:
//                // ignore;
//                break;
//        }
//    }

//    headerFile.write("\r\n};");
//}

function writeDeclarationsPrologue(baseName: string, file: string): string {
    file += "\
// This file contains automatically generated proxies for JavaScript.\r\n\
\r\n\
#include \"jsrt.wrappers.h\"";

    return file;
}

function writeDeclarationsEpilogue(file: string): string {
    return file;
}

//function checkSignatureGroup(fileName: string, type: TypeScript.Type, group: TypeScript.SignatureGroup, types: TypeScript.Type[]): boolean
//{
//    if (group.signatures.length > 1)
//    {
//        reportError(fileName, ErrorCode.OverloadingNotAllowed);
//        return false;
//    }

//    var signature: TypeScript.Signature = group.signatures[0];

//    for (var index: number = 0; index < signature.parameters.length; index++)
//    {
//        var parameter: TypeScript.ParameterSymbol = signature.parameters[index];

//        if (!checkType(fileName, parameter.getType(), types))
//        {
//            return false;
//        }
//    }

//    return checkType(fileName, signature.returnType.type, types);
//}

//function checkMembers(fileName: string, members: TypeScript.PullSymbol[], types: TypeScript.PullTypeSymbol[]): boolean
//{
//    console.log("checkMembers " + members.length.toString());
//    if (members && members.length > 0 && !members.every(
//        (symbol: TypeScript.PullSymbol) =>
//        {
//            if (!symbol.isExternallyVisible())
//            {
//                reportError(fileName, ErrorCode.PrivateMembersNotAllowed);
//                return false;
//            }
//            return checkType(fileName, symbol.type, types);
//        }, null))
//    {
//        return false;
//    }

//    return true;
//}

function checkType(document: TypeScript.Document, start: number, type: TypeScript.PullTypeSymbol): boolean {
    if (!type) {
        reportError(document, start, ErrorCode.UnsupportedType);
        return false;
    }
    else if (type.isPrimitive()) {
        if (type.name === "boolean" || type.name === "number" || type.name === "string" || type.name === "void" || type.name === "any") {
            return true;
        }
        else {
            reportError(document, start, ErrorCode.UnsupportedType);
            return false;
        }
    }
    else if (type.isArrayNamedTypeReference()) {
        return checkType(document, start, type.getElementType());
    }
    else if (type.isNamedTypeSymbol()) {
        var declarations: TypeScript.PullDecl[] = type.getDeclarations();
        var sourceUnit: TypeScript.SourceUnit = document.sourceUnit();

        assert(declarations && declarations.length > 0);

        if (declarations.every((value: TypeScript.PullDecl): boolean => {
            var ast: TypeScript.AST = document._getASTForDecl(value);
            while (ast) {
                if (ast === sourceUnit) {
                    return true;
                }

                ast = ast.parent;
            }

            return false;
        })) {
            return true;
        } else {
            reportError(document, start, ErrorCode.ExternalTypesNotAllowed);
            return false;
        }
    }

    //if (type.isGeneric())
    //{
    //    reportError(fileName, ErrorCode.GenericsNotAllowed);
    //    return false;
    //}

    //if (type.getIndexSignatures().length != 0)
    //{
    //    reportError(fileName, ErrorCode.IndexersNotAllowed);
    //    return false;
    //}

    //    if (type.call)
    //    {
    //        //if (!isAnonymous(type))
    //        //{
    //        //    reportError(fileName, ErrorCode.CallInNonAnonymousTypeNotAllowed);
    //        //    return false;
    //        //}
    //        //else 
    //        if (type.construct)
    //        {
    //            reportError(fileName, ErrorCode.CallAndConstructNotAllowed);
    //            return false;
    //        }
    //        if (!checkSignatureGroup(fileName, type, type.call, types))
    //        {
    //            return false;
    //        }
    //    }

    //    if (type.construct)
    //    {
    //        if (!isAnonymous(type) && !type.isClass())
    //        {
    //            reportError(fileName, ErrorCode.ConstructInNonAnonymousTypeNonClassNotAllowed);
    //            return false;
    //        }
    //        else if (type.construct && !checkSignatureGroup(fileName, type, type.construct, types))
    //        {
    //            return false;
    //        }
    //    }

    //    if (isAnonymous(type) && type.members && type.members.allMembers.count() > 0)
    //    {
    //        reportError(fileName, ErrorCode.NonFunctionAnonymousTypesNotAllowed);
    //        return false;
    //    }

    //    if (type.isClass())
    //    {
    //        if (type.extendsList && type.extendsList.length > 0)
    //        {
    //            reportError(fileName, ErrorCode.ClassExtensionNotAllowed);
    //            return false;
    //        }

    //        // All classes have a static prototype property on their class
    //        if (type.members.allMembers.count() > 1)
    //        {
    //            reportError(fileName, ErrorCode.StaticMembersNotAllowed);
    //            return false;
    //        }

    //        if (!checkType(fileName, type.instanceType, types))
    //        {
    //            return false;
    //        }
    //    }

    //    return checkMembers(fileName, type.getMembers(), types);

    reportError(document, start, ErrorCode.UnsupportedType);
    return false;
}

function checkModifiers(document: TypeScript.Document, location: number, modifiers: TypeScript.PullElementFlags[]): boolean {
    for (var index: number = 0; index < modifiers.length; index++) {
        switch (modifiers[index]) {
            case TypeScript.PullElementFlags.Ambient:
                break;

            default:
                reportError(document, location, ErrorCode.UnexpectedModifier, TypeScript.PullElementFlags[modifiers[index]]);
                return false;
        }
    }

    return true;
}

function checkVariableStatement(document: TypeScript.Document, variableStatement: TypeScript.VariableStatement): boolean {
    if (!checkModifiers(document, variableStatement.start(), variableStatement.modifiers)) {
        return false;
    }

    var index: number;
    var declarators: TypeScript.ISeparatedSyntaxList2 = variableStatement.declaration.declarators;

    for (index = 0; index < declarators.nonSeparatorCount(); index++) {
        var declarator: TypeScript.VariableDeclarator = <TypeScript.VariableDeclarator>declarators.nonSeparatorAt(index);

        assert.equal(declarator.kind(), TypeScript.SyntaxKind.VariableDeclarator);

        if (!checkType(document, declarator.typeAnnotation ? declarator.typeAnnotation.start() : declarator.start(), document._getDeclForAST(declarator).getSymbol().type)) {
            return false;
        }

        assert(!declarator.equalsValueClause);
    }

    return true;
}

function checkFunctionDeclaration(document: TypeScript.Document, functionDeclaration: TypeScript.FunctionDeclaration): boolean {
    if (!checkModifiers(document, functionDeclaration.start(), functionDeclaration.modifiers)) {
        return false;
    }

    return true;
}

function checkInterfaceDeclaration(document: TypeScript.Document, interfaceDeclaration: TypeScript.InterfaceDeclaration): boolean {
    if (!checkModifiers(document, interfaceDeclaration.start(), interfaceDeclaration.modifiers)) {
        return false;
    }

    return true;
}

function checkClassDeclaration(document: TypeScript.Document, classDeclaration: TypeScript.ClassDeclaration): boolean {
    if (!checkModifiers(document, classDeclaration.start(), classDeclaration.modifiers)) {
        return false;
    }

    return true;
}

function checkModuleDeclaration(document: TypeScript.Document, moduleDeclaration: TypeScript.ModuleDeclaration): boolean {
    if (!checkModifiers(document, moduleDeclaration.start(), moduleDeclaration.modifiers)) {
        return false;
    }

    if (moduleDeclaration.stringLiteral) {
        reportError(document, moduleDeclaration.stringLiteral.start(), ErrorCode.ExternalModulesNotAllowed);
        return false;
    }

    return true;
}

function checkEnumDeclaration(document: TypeScript.Document, enumDeclaration: TypeScript.EnumDeclaration): boolean {
    if (!checkModifiers(document, enumDeclaration.start(), enumDeclaration.modifiers)) {
        return false;
    }

    return true;
}

function checkSourceUnit(document: TypeScript.Document, sourceUnit: TypeScript.SourceUnit): boolean {
    for (var index: number = 0; index < sourceUnit.moduleElements.childCount(); index++) {
        var ast: TypeScript.AST = sourceUnit.moduleElements.childAt(index);
        switch (ast.kind()) {
            case TypeScript.SyntaxKind.VariableStatement:
                return checkVariableStatement(document, <TypeScript.VariableStatement>ast);

            case TypeScript.SyntaxKind.FunctionDeclaration:
                return checkFunctionDeclaration(document, <TypeScript.FunctionDeclaration>ast);

            case TypeScript.SyntaxKind.InterfaceDeclaration:
                return checkInterfaceDeclaration(document, <TypeScript.InterfaceDeclaration>ast);

            case TypeScript.SyntaxKind.ClassDeclaration:
                return checkClassDeclaration(document, <TypeScript.ClassDeclaration>ast);

            case TypeScript.SyntaxKind.ModuleDeclaration:
                return checkModuleDeclaration(document, <TypeScript.ModuleDeclaration>ast);

            case TypeScript.SyntaxKind.EnumDeclaration:
                return checkEnumDeclaration(document, <TypeScript.EnumDeclaration>ast);

            case TypeScript.SyntaxKind.EmptyStatement:
                // ignore;
                break;

            default:
                reportError(document, ast.start(), ErrorCode.UnexpectedDeclaration, TypeScript.SyntaxKind[ast.kind()]);
                return false;
        }
    }

    return true;

}

function checkDocument(document: TypeScript.Document): boolean {
    if (!document.isDeclareFile()) {
        reportError(document, -1, ErrorCode.NotADeclareFile);
        return false;
    }

    if (document.isExternalModule()) {
        reportError(document, -1, ErrorCode.ExternalModulesNotAllowed);
        return false;
    }

    return checkSourceUnit(document, document.sourceUnit());
}

function printLogo(): void {
    console.log("TsIdl Version 1.0");
    console.log("Copyright (C) Paul Vick. All rights reserved.");
    console.log();
}

function main(): void {
    var ioHost: TypeScript.IIO = TypeScript.IO;

    nomnom
        .script("tsidl")
        .option("nologo",
        {
            flag: true,
            help: "Suppress logo display",
        })
        .option("out",
        {
            abbrev: "o",
            help: "The target file to write to."
        });

    // CONSIDER: Option to choose line endings? Choose endings based on platform?

    var cmdLine = nomnom.parse(ioHost.arguments);
    var files = <string[]>cmdLine._;

    if (!cmdLine.nologo) {
        printLogo();
    }

    if (!files || files.length == 0) {
        reportGenericError(ErrorCode.NoFiles);
        process.exit(1);
    }

    if (files.length > 1) {
        reportGenericError(ErrorCode.MultipleFiles);
        process.exit(1);
    }

    var script: string = "";

    try {
        var scriptFile: TypeScript.FileInformation = ioHost.readFile(files[0], null);
        script = scriptFile.contents;
    }
    catch (err) {
        reportGenericError(ErrorCode.CouldNotReadFile, files[0]);
    }

    var document: TypeScript.Document = compile(script, files[0], ioHost);

    if (!document) {
        process.exit(1);
    }

    if (!checkDocument(document)) {
        process.exit(1);
    }

    var headerFile: string = "";
    var baseName: string = getFileNameWithoutExtension(files[0]);
    var headerFileName: string = cmdLine.out || baseName + ".proxy.h";

    try {
        if ((/\.d$/i).test(baseName)) {
            baseName = baseName.substring(0, baseName.length - 2);
        }

        headerFile = writeDeclarationsPrologue(baseName, headerFile);
        //    writeScriptDeclaration(baseName, scriptAST, types, headerFile);
        headerFile = writeDeclarationsEpilogue(headerFile);

        ioHost.writeFile(headerFileName, headerFile, false);
    }
    catch (err) {
        reportGenericError(ErrorCode.CantOpenOutputFile, headerFileName);
        process.exit(1);
    }
}

main();