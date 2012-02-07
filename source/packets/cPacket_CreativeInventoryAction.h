
#pragma once

#include "cPacket.h"





//Sure it�s not Creative Inventory?

class cPacket_CreativeInventoryAction : public cPacket
{
public:
	cPacket_CreativeInventoryAction()
		: m_Slot( 0 )
		, m_ItemID( 0 )
		, m_Quantity( 0 )
		, m_Damage( 0 )
	{ m_PacketID = E_CREATIVE_INVENTORY_ACTION; m_Quantity = 1; }
	cPacket_CreativeInventoryAction( const cPacket_CreativeInventoryAction & a_Copy );
	virtual cPacket* Clone() const { return new cPacket_CreativeInventoryAction(*this); }

	virtual int Parse(const char * a_Data, int a_Size) override;
	virtual void Serialize(AString & a_Data) const override;

	short m_Slot; // 0 = hold 1-4 = armor
	short m_ItemID;
	char m_Quantity; //Byte not short ;)
	short m_Damage;

	static const unsigned int c_Size = 1 + 2;
};




