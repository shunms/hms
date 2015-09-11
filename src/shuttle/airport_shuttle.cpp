#include<time.h>
#include<string>
using namespace std;
#include "Airport_Shuttle.h"
#include "qt_Airport_Shuttle.h"  /* QT GUI */
#include "db_mgr.h"

#define rateMorning	35
#define rateNoon		25
#define rateEvening	30
#define rateOffhours	20

/* Contructor */
	Airport_Shuttle::Airport_Shuttle()
	{
	db_mgr database
	}

	/* Destructor */
	Airport_Shuttle::~Airport_Shuttle()
	{
	}

/* Determines shuttle information: number in operation for the time of day */
	void Airport_Shuttle::ShuttleInfo();
	{
		int numGuests, numReservations;

		numGuests=database.GetNumGuests();
		numReservations.GetNumReservations();

		/* inputing to DB: # shuttle in opration, time of day, roud trip rate to/from airport */
		database.CreateShuttleInfoTable(4+(int)(numGuests/100),"morning",rateMorning);
		database.CreateShuttleInfoTable(4+(int)(numGuests/100),"midday",rateNoon);
		database.CreateShuttleInfoTable(2,"offhours",rateOffhours);

		/* the evening number of shuttles in operations is dependent on the # of reservations for that day */
		database.CreateShuttleInfoTable(4+(int)(numReservations/100),"evening",rateEvening);
	}

	/* Updates DB when a shuttle depart the hotel */
	void ShuttleDeparture(QString shuttleId);
	{
		
		char timeofDay,todaysDate,arrivalTime;
		_strtime( timeofDay );
		_strdate( todaysDate );
/* Note: check out the following url for system time access */
/* http://msdn.microsoft.com/library/default.asp?url=/library/en-us/vclib/html/_CRT_Time_Management.asp */

		arrivalTime=timeofDay+rateOffhours;
		if(500 <= timeofDay <=900)
		arrivalTime=timeofDay+rateMorning;
		if(1100 <= timeofDay <=1300)
		arrivalTime=timeofDay+rateNoon;
		if(1600 <= timeofDay <=1900)
		arrivalTime=timeofDay+rateEvening;

		/* Inputs ShuttleOperationTable: shuttle id, location, departure time, est arrival time, date */
		database.AddShuttleDeparture(shuttleId,"in route",timeofDay,arrivalTime,todaysDate);
	}


	/* Determines the number and info for shuttles in route */
	int Airport_Shuttle::ShuttlesInRoute();
	{
	int shuttles;
	shuttles=database.NumShuttlesInRoute();
	}

	/* Updates DB when shuttle arrives at hotel for boarding */
	void Airport_Shuttle::ShuttleArrival(QString shuttleId);
	{
	database.ShuttleUpdate(shuttleId,"hotel","N/A","N/A");
	}

	/* Determines the arrival trimes of shuttles in route */
	string Airport_Shuttle::ArrivalTime(int shuttleNum);

	/* Determines the locations of all the operating shuttles */
	void Airport_Shuttle::ShuttleLocations();
