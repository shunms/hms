/*--------------- table_waitlist_base.cpp ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Table Waitlist base

*/

/* ---- Table Waitlist Base Constructor---- */

#include "table_waitlist_base.h"

/*void Table_Waitlist_Base::Table_Waitlist_Base()
{
   
}*/


/* ---- Function Room base Destructor---- */
/*void Table_Waitlist_Base::~Table_Waitlist_Base()
{
    
}*/

/* Set Function*/
/*void Table_Waitlist_Base::SetDBId( DBID dbid )
{
    DBid = dbid;
}
*/
void Table_Waitlist_Base::SetWaitListNo( int waitlistno )
{
    WaitListNo = waitlistno;
    
}


void Table_Waitlist_Base::SetFirstName( QString firstname)
{
    CustFirstName = firstname;
    
}

void Table_Waitlist_Base::SetLastName( QString lastname)
{
    CustLastName = lastname;
    
}

void Table_Waitlist_Base::SetHotelRoomNo(int hotelroomno )
{
    CustHotelRoomNo = hotelroomno ;
    
}

void  Table_Waitlist_Base::SetCapacity( int capacity )
{
    Capacity = capacity;
    
}

/*Get Function*/

/*int  Table_Waitlist_Base::GetDBId() const
{
    return DBid;
}*/

int Table_Waitlist_Base::GetWaitListNo()
{
    return WaitListNo;
    
}


int Table_Waitlist_Base::GetCapacity()
{
    return Capacity ;
    
}

QString Table_Waitlist_Base::GetFirstName()
{
    return CustFirstName;
    
}

QString Table_Waitlist_Base::GetLastName()
{
    return CustLastName ;
    
}

int Table_Waitlist_Base::GetHotelRoomNo()
{
    return CustHotelRoomNo;
    
}

