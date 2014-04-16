#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include <string>

extern JsErrorCode DefineGlobals();
extern void ProcessResult(JsValueRef result);

#define IfFailError(v, e) \
    { \
    JsErrorCode error = (v); \
    if (error != JsNoError) \
        { \
        fwprintf(stderr, L"fatal error: %s.\n", (e)); \
        goto error; \
        } \
    }

#define IfFailRet(v) \
    { \
    JsErrorCode error = (v); \
    if (error != JsNoError) \
        { \
        return error; \
        } \
    }

using namespace std;

wstring LoadScript(wstring fileName)
{
    FILE *file;
    if (_wfopen_s(&file, fileName.c_str(), L"rb"))
    {
        fwprintf(stderr, L"unable to open file: %s.\n", fileName.c_str());
        return wstring();
    }

    unsigned int current = ftell(file);
    fseek(file, 0, SEEK_END);
    unsigned int end = ftell(file);
    fseek(file, current, SEEK_SET);
    unsigned int lengthBytes = end - current;
    char *rawBytes = (char *) calloc(lengthBytes + 1, sizeof(char));

    if (rawBytes == nullptr)
    {
        fwprintf(stderr, L"fatal error.\n");
        return wstring();
    }

    fread((void *) rawBytes, sizeof(char), lengthBytes, file);

    wchar_t *contents = (wchar_t *) calloc(lengthBytes + 1, sizeof(wchar_t));
    if (contents == nullptr)
    {
        free(rawBytes);
        fwprintf(stderr, L"fatal error.\n");
        return wstring();
    }

    if (MultiByteToWideChar(CP_UTF8, 0, rawBytes, lengthBytes + 1, contents, lengthBytes + 1) == 0)
    {
        free(rawBytes);
        free(contents);
        fwprintf(stderr, L"fatal error.\n");
        return wstring();
    }

    wstring result = contents;
    free(rawBytes);
    free(contents);
    return result;
}

JsErrorCode PrintScriptException()
{
    JsValueRef exception;
    IfFailRet(JsGetAndClearException(&exception));
    JsPropertyIdRef messageName;
    IfFailRet(JsGetPropertyIdFromName(L"message", &messageName));
    JsValueRef messageValue;
    IfFailRet(JsGetProperty(exception, messageName, &messageValue));
    const wchar_t *message;
    size_t length;
    IfFailRet(JsStringToPointer(messageValue, &message, &length));
    fwprintf(stderr, L"exception: %s\n", message);
    return JsNoError;
}

int _cdecl wmain(int argc, wchar_t *argv[])
{
    int returnValue = EXIT_FAILURE;

    fwprintf(stdout, L"TsIDL Test Harness\n");

    try
    {
        JsRuntimeHandle runtime;
        JsContextRef context;

        IfFailError(JsCreateRuntime(JsRuntimeAttributeNone, JsRuntimeVersionEdge, nullptr, &runtime), L"failed to create runtime.");
        IfFailError(JsCreateContext(runtime, nullptr, &context), L"failed to create context.");
        IfFailError(JsSetCurrentContext(context), L"failed to set current context.");
        IfFailError(DefineGlobals(), L"failed to define globals.");
        wstring script = LoadScript(argv[1]);
        if (script.empty())
        {
            goto error;
        }

        JsValueRef result;
        JsErrorCode errorCode = JsRunScript(script.c_str(), 0, argv[1], &result);

        if (errorCode == JsErrorScriptException)
        {
            IfFailError(PrintScriptException(), L"failed to print exception");
            return EXIT_FAILURE;
        }
        else
        {
            IfFailError(errorCode, L"failed to run script.");
            ProcessResult(result);
        }

        IfFailError(JsSetCurrentContext(JS_INVALID_REFERENCE), L"failed to cleanup current context.");
        IfFailError(JsDisposeRuntime(runtime), L"failed to cleanup runtime.");
    }
    catch (...)
    {
        fwprintf(stderr, L"fatal error: internal error.\n");
    }

error:
    return returnValue;
}
