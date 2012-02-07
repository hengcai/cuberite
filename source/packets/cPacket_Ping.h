
#pragma once

#include "cPacket.h"





class cPacket_Ping : public cPacket
{
public:
	cPacket_Ping()
	{ m_PacketID = E_PING; }
	virtual cPacket* Clone() const { return new cPacket_Ping(*this); }

	virtual int Parse(const char * a_Data, int a_Size) override {return 0; }

	static const unsigned int c_Size = 1;
};




