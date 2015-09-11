/*****************************************************************************
 * tables_info.cpp - source file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#include "tables_info.h"


Tables_Info::Tables_Info( ) 
{
}

Tables_Info::~Tables_Info( ) 
{
}


void Tables_Info::SetTableRestNum( QString number )
{
    restNumber = number;
}

void Tables_Info::SetTableNum( QString number )
{
    tableNumber = number;
}

void Tables_Info::SetTableCapacity( int capacity )
{
    tableCapacity = capacity;
}


QString Tables_Info::GetTableRestNum( )
{
    return restNumber;
}

QString Tables_Info::GetTableNum( )
{
    return tableNumber;
}

int Tables_Info::GetTableCapacity( )
{
    return tableCapacity;
}
















