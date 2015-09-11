/*--------------- tour_info_base.cpp ---------------*/
/*
BY:     Prasoonadevi Thippana
        Software Engineering
        Computer Engineering Dept.
        UMASS Lowell
*/

/*
PURPOSE
Hotel Management software - Tour Information base

*/
#include "tour_info_base.h"

/* ---- Tour Info Base Constructor---- */

void Tour_Info_Base::Tour_Info_Base()
{
   
}


/* ---- Tour Info base Destructor---- */
void Tour_Info_Base::~Tour_Info_Base()
{
    
}


/* Set Function*/
void Tour_Info_Base::SetDBId( DBID dbid )
{
    this->dbid = dbid;
}

void Tour_Info_Base::SetTourNo( int tourno )
{
    this->TourNo = tourno;
}

void Tour_Info_Base::SetDate( QDate date )
{
    this->Date = date;
}

void Tour_Info_Base::SetStartTime( QTime starttime )
{
    this->StartTime = starttime;
}

void Tour_Info_Base::SetArrivalTime( QTime Arrivaltime )
{
    this->ArrivalTime = Arrivaltime;
}

void Tour_Info_Base::SetTotalCapacity( int totalcapacity )
{
    this->TotalCapacity = totalcapacity;
    
}

void Tour_Info_Base::SetCost( int cost )
{
    this->Cost = cost;
    
}

void Tour_Info_Base::SetTourDetails( QString tourdetails )
{
    this->TourDetails = tourdetails;
    
}

/* Get Function*/
int Tour_Info_Base::GetDBId()
{
    return dbid;
}

int Tour_Info_Base::GetTourNo()
{
    return tourno;
}

QDate Tour_Info_Base::GetDate()
{
    return date;
}

QTime Tour_Info_Base::GetStartTime()
{
    return starttime;
}

QTime Tour_Info_Base::GetArrivalTime()
{
    return Arrivaltime;
}

int Tour_Info_Base::GetTotalCapacity()
{
    return totalcapacity;
    
}

int Tour_Info_Base::GetCost()
{
    return cost;
    
}

QString Tour_Info_Base::GetTourDetails()
{
    return tourdetails;
    
}

