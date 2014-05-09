#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include <string>

extern JsErrorCode DefineGlobals();
extern bool ProcessResult(JsValueRef result);

#define IfFailError(v, e) \
    { \
    JsErrorCode error = (v); \
    if (error != JsNoError) \
        { \
        wprintf(L"fatal error: %s.\n", (e)); \
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
        wprintf(L"unable to open file: %s.\n", fileName.c_str());
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
        wprintf(L"fatal error.\n");
        return wstring();
    }

    fread((void *) rawBytes, sizeof(char), lengthBytes, file);

    wchar_t *contents = (wchar_t *) calloc(lengthBytes + 1, sizeof(wchar_t));
    if (contents == nullptr)
    {
        free(rawBytes);
        wprintf(L"fatal error.\n");
        return wstring();
    }

    if (MultiByteToWideChar(CP_UTF8, 0, rawBytes, lengthBytes + 1, contents, lengthBytes + 1) == 0)
    {
        free(rawBytes);
        free(contents);
        wprintf(L"fatal error.\n");
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
    wprintf(L"exception: %s\n", message);
    return JsNoError;
}

int _cdecl wmain(int argc, wchar_t *argv[])
{
    wprintf(L"TsIDL Test Harness\n");

    if (argc != 2) {
        wprintf(L"wrong number of arguments\n");
        goto error;
    }

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

        if (errorCode != JsNoError)
        {
            if (errorCode == JsErrorScriptException)
            {
                IfFailError(PrintScriptException(), L"failed to print exception");
            }
            goto error;
        }
        else
        {
            try
            {
                if (!ProcessResult(result))
                {
                    goto error;
                }
            }
            catch (...)
            {
                goto error;
            }
        }

        IfFailError(JsCollectGarbage(runtime), L"failed to collect garbage.");
        IfFailError(JsSetCurrentContext(JS_INVALID_REFERENCE), L"failed to cleanup current context.");
        IfFailError(JsDisposeRuntime(runtime), L"failed to cleanup runtime.");
    }
    catch (...)
    {
        wprintf(L"fatal error: internal error.\n");
        goto error;
    }

    wprintf(L"SUCCESS\n");
    return EXIT_SUCCESS;

error:
    wprintf(L"FAILED\n");
    return EXIT_FAILURE;
}
