#ifndef __MSEARCHINFO_H__
#define __MSEARCHINFO_H__

#include <IPAddress.h>
#include <Arduino.h>

struct MSearchInfo
{
	IPAddress RemoteIP;
	uint16 RemotePort;
	uint32 ProcessTime;
	String SearchTarget;
};

#endif