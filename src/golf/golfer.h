/*------------------------------------------------------------*/
/*---------golfer.h file----------------------------*/
/*---------Warren Campbell------------------------------------*/
/*------------Team Softlinks----------------------------------*/
/*------------------------------------------------------------*/


#ifndef GOLFER_H
#define GOLFER_H


#include <QObject>

class Golfer : public QObject
{

	Q_Object

	private:

	

	public:

	/* Contructor */
	Golfer();

	/* Destructor */
	~Golfer();

	/* Calculates the greens fee for the guest party */
	int CalcFee(string guestType, string teeTime, string day, string numPlayers);

	/* Sends bill to the guest's room account */
	void ApplyBill(int feeTotal, string reservationID);

	/* Determines the location of the golfer on the course */
	int GolferLocation(string teeTime);

#endif