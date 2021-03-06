#pragma once
#include "FilterPort.hpp"

using namespace System;

namespace WslCoreWrapper {
    public ref class FilterPortWrapper
    {
    public:
        FilterPortWrapper()
        {
            Console::WriteLine("create port");
            _Port = new WslCore::FilterPort{ L"\\WslFlt", nullptr, 0 };
            Console::WriteLine("created port");
            _Buffer = new unsigned char[2048];
        }

        ~FilterPortWrapper()
        {
            delete _Port;
            delete _Buffer;
        }

        String^
        WaitDetection()
        {
            Console::WriteLine("waiting for message");
            _Port->Receive(reinterpret_cast<PFILTER_MESSAGE_HEADER>(_Buffer), 2048, nullptr);
            Console::WriteLine("got message ");
            wchar_t* name = (wchar_t*)((PBYTE)_Buffer + sizeof(FILTER_MESSAGE_HEADER));
            String^ parsedName = gcnew String(name);
            parsedName += " ";
            Console::WriteLine(name);
            return parsedName;

        }
    private:
        WslCore::FilterPort* _Port;
        unsigned char* _Buffer;
    };
}
