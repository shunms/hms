#include<time.h>
#include<string>
using namespace std;
#include "golfer.h"
#include "qt_golfer.h"  /* QT GUI */
#include "db_mgr.h"

#define playingRate		15   /* average time  (min) to play a single hole */

/* Contructor */
	Golfer::Golfer()
	{
	db_mgr database
	}

	/* Destructor */
	Golfer::~Golfer()
	{
	}


	/* Calculates the greens fee for the guest party */
	/* Note: if we know "Golfer ID" the arguement can be "int goferId" */
	int CalcFee(string guestType, string teeTime, string day, string numPlayers)
	{
		int unitFee, feeTotal;

		unitFee=(int)database.GetFee(questType, teeTime, day)
		feeTotal=unitFee*(int)numPlayers;
		return feeTotal;
	}


	/* Sends bill to the guest's room account */
	void ApplyBill(int feeTotal, string reservationID)
	{
		database.DebitGuestAcct(reservationID,feeTotal);
	}
		

	/* Determines the location of the golfer on the course */
	int GolferLocation(string teeTime)
	{
		int hole;
		char timeofDay;
		_strtime( timeofDay );
		hole=(int)((timeofDay-teeTime)/15);
		if(hole < 1)
		{
			hole=0;
			return hole;
		}
		if(hole > 18)
		{
			hole = 19;
			return hole;
		}
		return hole;
	}