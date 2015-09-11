/*------------------------------------------------------------*/
/*---------Gift_Certificate.h file----------------------------*/
/*---------Warren Campbell------------------------------------*/
/*------------Team Softlinks----------------------------------*/
/*------------------------------------------------------------*/


#ifndef GIFT_CERTIFICATE_H
#define GIFT_CERTIFICATE_H


#include <QObject>

class Gift_Certificate : public QObject
{

	Q_Object

	public:

	/* Contructor */
	Gift_Certificate();

	/* Destructor */
	~Gift_Certificate();

	/* Inputs certificate number */
	void InputCertNumber(QString certNum);

	/* Inputs certificate sponsor */
	void InputSponsor(QString sponsor);

	/* Inputs value of certificate */
	void InputValue(Price value);

	/* Inputs valid from date */
	void InputValidDate(QString validDate);

	/* Inputs valid till date */
	void InputValidTill(QString validTill);

	/* Returns amount of a given certificate number */
	double CertificateAmount(QString certNumber);

	/* Determines if a given certificate is in the DB */
	bool ValidCertificate(QString certNumber);
	
	/* Lists the certificates in the DB */
	void ListCertificates();


	/* The following functions acquire data from the DB */

	/* Gets ther certification number */
	void GetCertNumber();

	/* Gets the certificate sponsor */
	void GetCertSponsor();

	/* Gets the value of the certificate */
	void GetCertValue();

	/* Gets the date posted */
	void GetDatePosted();

	/* Gets the valid from date */
	void GetValidFrom();

	/* Gets the valid till date */
	void GetValidTill();

	/* Gets the redemption value (yes/no) */
	void GetRedemption();

	/* Gets the notes for the certificate */
	void GetCertNotes();
};

#endif