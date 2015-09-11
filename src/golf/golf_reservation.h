/*------------------------------------------------------------*/
/*---------golf_reservation.h file----------------------------*/
/*---------Warren Campbell------------------------------------*/
/*------------Team Softlinks----------------------------------*/
/*------------------------------------------------------------*/


#ifndef GOLF_RESERVATION_H
#define GOLF_RESERVATION_H


#include <QObject>

class Golf_Reservation : public QObject
{

	Q_Object

	private:

	

	public:

	/* Contructor */
	Golf_Reservation();

	/* Destructor */
	~Golf_Reservation();

	/* Lists the available tee-times for a given day */
	void ListAvailTimes(string day);

	/* makes the reservation */
	void MakeReservation(QString room,QString firstName, QString lastName
		,QString resDate,Qstring teeTime,QString numPlayers
			,Qstring dateCreated,QString notes);

	/* checks in golfer with reservation */
	void GolferCheckIn(Qstring resNumber,QString firstName,QString lastName);

	/* checks in golfer without a reservation */
	void GolferCheckIn(QString firstName, QString lastName
		,QString resDate,Qstring teeTime,QString numPlayers
			,Qstring dateCreated,QString notes);

	/* Lists inventory of golf clubs */
	void ClubInventory();

	/* checks out clubs from inventory */
	void ClubCheckout(QString clubType,Qstring numSets);

	/* checks in returned clubs */
	void ClubCheckin(QString clubType,QString numSets);

	/* searches for reservation and returns information */
	void ResSearch(QString resNumber);
 

#endif