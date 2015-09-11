/*****************************************************************************
 * func_room_info.cpp - source file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#include "func_room_info.h"


Func_Room_Info::Func_Room_Info( ) 
{
}

Func_Room_Info::~Func_Room_Info( ) 
{
}


void Func_Room_Info::SetFuncRoomName( QString name )
{
    funcRoomName = name;
}

void Func_Room_Info::SetFuncRoomNum( QString number )
{
    funcRoomNumber = number;
}

void Func_Room_Info::SetFuncRoomCapacity( int capacity )
{
    funcRoomCapacity = capacity;
}

void Func_Room_Info::SetFuncRoomRate( Price rate )
{
    hourRate = rate;
}



QString Func_Room_Info::GetFuncRoomName( )
{
    return funcRoomName;
}

QString Func_Room_Info::GetFuncRoomNum( )
{
    return funcRoomNumber;
}

int Func_Room_Info::GetFuncRoomCapacity( )
{
    return funcRoomCapacity;
}

Price Func_Room_Info::GetFuncRoomRate( )
{
    return hourRate;
}
















