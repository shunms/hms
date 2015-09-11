/*****************************************************************************
 * room_types_base.cpp - source file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#include "room_types_base.h"


Room_Types_Base::Room_Types_Base( ) 
{
}

Room_Types_Base::~Room_Types_Base( ) 
{
}



void Room_Types_Base::SetRoomType( QString type )
{
    roomType = type;
}

void Room_Types_Base::SetRoomRate( Price rate )
{
    roomRate = rate;
}



QString Room_Types_Base::GetRoomType( )
{
    return roomType;
}

Price Room_Types_Base::GetRoomRate( )
{
    return roomRate;
}








