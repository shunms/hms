#include<string>
using namespace std;
#include "gift_certificate.h"
#include "qt_gift_certificate.h"  /* QT GUI */
#include "db_mgr.h"

/* Contructor */
	gift_certificate::gift_certificate()
	{
	db_mgr database
	}

	/* Destructor */
	gift_certificate::~gift_certificate()
	{
	}

	/* Inputs certificate number */
	void gift_certificate::InputCertNumber(QString certNum)
	{
	database.GiftCertInfo.add(certNum)=certNum; /* adds certNum into next empty row in the GiftCertInfo table */
	}

	/* Inputs certificate sponsor */
	void gift_certificate::InputSponsor(QString sponsor)
	{
	database.GiftCertInfo.add(sponsor)=sponsor;
	}

	/* Inputs value of certificate */
	void gift_certificate::InputValue(Price value)
	{
	database.GiftCertInfo.add(value)=value;
	}

	/* Inputs valid from date */
	void gift_certificate::InputValidDate(QString validDate)
	{
	database.GiftCertInfo.add(validDate)=validDate;
	}

	/* Inputs valid till date */
	void gift_certificate::InputValidTill(QString validTill)
	{
	database.GiftCertInfo.add(validTill)=validTill;
	}

	/* Returns amount of a given certificate number */
	double gift_certificate::CertificateAmount(QString certNumber)
	{
		return GetCertValue(certNumber);
	}

	/* Determines if a given certificate is in the DB */
	bool gift_certificate::ValidCertificate(QString certNumber)
	{

		return GetRedemption(certNumber);
	}
	
	/* Lists the certificates in the DB */
	+
	void gift_certificate::ListCertificates()
	{
		int i;
		char certNumber;
		QObject list;

		while(GetCertNumber() != NULL)
			do
		{
			list.add.c1(GetCertNumber());   /* adds certNumber to GUI list box in column 1 */
			list.add.c2(GetCertSponsor());
			list.add.c3(GetCertValue());
			list.add.c4(GetDatePosted());
			list.add.c5(GetValidFrom());
			list.add.c6(GetValidTill());
			list.add.c7(GetRedemption());
			list.add.c8(GetCertNotes());
		}
	}

	/* The following functions acquire data from the DB */

	/* Gets the certification number */
	string gift_certificate::GetCertNumber()
	{
		string certNumber;
		certNumber.insert(0,database.GiftCertInfo.get(certNum));
		return certNumber;

	/* Gets the certificate sponsor */
	string gift_certificate::GetCertSponsor(string certNumber)
	{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the value of the certificate */
	void gift_certificate::GetCertValue()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the date posted */
	void gift_certificate::GetDatePosted()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the valid from date */
	void gift_certificate::GetValidFrom()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the valid till date */
	void gift_certificate::GetValidTill()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the redemption value (yes/no) */
	void gift_certificate::GetRedemption()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}

	/* Gets the notes for the certificate */
	void gift_certificate::GetCertNotes()
		{
		string sponsor;
		sponsor.insert(0,database.GiftCertInfo.get(sponsor));
		return sponsor;
	}