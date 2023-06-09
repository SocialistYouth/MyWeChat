#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <WinSock2.h>
#include <process.h>
#include "packdef.h"
#include "INetMediator.h"
// #pragma comment (lib, "ws2_32.lib")

namespace net {
class INet
{
public:
    INet() {}
    virtual ~INet() {}
    virtual bool InitNet() = 0;
    virtual void UnInitNet() = 0;
    virtual bool SendData(unsigned long lSendIP, const char* buf, int nLen) = 0;
protected:
    virtual void RecvData() = 0;
    INetMediator* m_pMediator;

};
}

