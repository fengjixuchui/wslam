#ifndef _APP_COMMUNICATION_WRAPPER_HPP_
#define _APP_COMMUNICATION_WRAPPER_HPP_

#include "DriverComm.hpp"

using namespace System;
using namespace System::Configuration;
using namespace System::Runtime::InteropServices;

namespace WSLSystemServiceCommunicationCore
{
    public ref class AppServiceConnection
    {
    public:
        AppServiceConnection()
        {
            comPort = new WslCore::DriverComm{};
            comPort->SendEcho("asdf");
        }

        void
        GetMessage(String^ ImageFileName)
        {
        }

        ~AppServiceConnection()
        {
        }
    private:
        WslCore::DriverComm* comPort;
    };
}

#endif //_APP_COMMUNICATION_WRAPPER_HPP_
