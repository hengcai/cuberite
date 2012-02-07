
#pragma once

#include "cPacket.h"

#include "cPacket_Login.h"





class cPacket_Respawn : public cPacket
{
public:
	cPacket_Respawn()
		: m_World( 0 )
		, m_Difficulty( 0 )
		, m_CreativeMode( 0 )
		, m_WorldHeight( 0 )
		, m_MapSeed( 0 )
		, m_LevelType( cPacket_Login::LEVEL_TYPE_DEFAULT )
	{ m_PacketID = E_RESPAWN; }
	virtual cPacket* Clone() const { return new cPacket_Respawn( *this ); }

	virtual int Parse(const char * a_Data, int a_Size) override;
	virtual void Serialize(AString & a_Data) const override;

	char m_World;
	char m_Difficulty;
	char m_CreativeMode;
	short m_WorldHeight;
	long long m_MapSeed;
	AString m_LevelType;

	static const unsigned int c_Size = 1 + 1 + 1 + 1 + 2 + 8 + 2;
};




