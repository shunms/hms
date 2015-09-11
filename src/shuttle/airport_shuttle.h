/*------------------------------------------------------------*/
/*---------airport_shuttle.h file----------------------------*/
/*---------Warren Campbell------------------------------------*/
/*------------Team Softlinks----------------------------------*/
/*------------------------------------------------------------*/


#ifndef AIRPORT_SHUTTLE_H
#define AIRPORT_SHUTTLE_H


#include <QObject>

class Airport_Shuttle : public QObject
{

	Q_Object

	private:

	rateMorning;
	rateNoon;
	rateEvening;
	rateOffhours;

	public:

	/* Contructor */
	Airport_Shuttle();

	/* Destructor */
	~Airport_Shuttle();

	/* Determines the number of shuttles in operation for the day */
	void InOperation();

	/* Determines the number and info for shuttles in route */
	int ShuttlesInRoute();

	/* Updates DB when shuttle arrives at hotel for boarding */
	void ShuttleArrival();

	/* Determines the arrival trimes of shuttles in route */
	string ArrivalTime(int shuttleNum);

	/* Determines the locations of all the operating shuttles */
	void ShuttleLocations();

#endif