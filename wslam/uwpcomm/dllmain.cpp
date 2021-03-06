// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>

#include "winrt/Windows.Storage.h"
#include "winrt/Windows.Storage.Streams.h"
#include "winrt/Windows.ApplicationModel.AppService.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Foundation.h"

BOOL
APIENTRY
DllMain(
    HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

