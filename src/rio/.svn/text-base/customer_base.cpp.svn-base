/*****************************************************************************
 * bill_address_base.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-16
 *
 *****************************************************************************
 */



#include "customer_base.h"


Customer_Base::Customer_Base( QObject * parent ) : QObject( parent )
{}

Customer_Base::Customer_Base( const QString name, QObject * parent )
    : QObject( parent )
{
    this->name = name;
}


void Customer_Base::SetName( QString name )
{
    this->name = name;
}


void Customer_Base::SetAddress( QString address )
{
    billAddress = address;
}


void Customer_Base::SetCity( QString city )
{
    billCity = city;
}

void Customer_Base::SetState( QString state )
{
    billState = state;
}

void Customer_Base::SetCountry( QString country )
{
    billCountry = country;
}

void Customer_Base::SetCCNumber( QString ccnumber )
{
    this->ccNumber = ccnumber;
}

void Customer_Base::SetBillingType( QString type )
{
    this->billType = type;
}


QString Customer_Base::GetName()
{
    return name;
}

QString Customer_Base::GetAddress()
{
    return billAddress;
}

QString Customer_Base::GetCity()
{
    return billCity;
}

QString Customer_Base::GetState()
{
    return billState;
}

QString Customer_Base::GetCountry()
{
    return billCountry;
}


QString Customer_Base::GetCCNumber()
{
    return ccNumber;
}



QString Customer_Base::GetBillingType()
{
    return billType;
}


QString Customer_Base::GetCCNumberHidden( QString mark )
{
    QString temp;
    temp = QString("%1%1%1%1").arg( mark );
    return QString("%1-%1-%1-%1").arg( temp );

}

QString Customer_Base::GetCCNumberLast4()
{
    return ccNumber.right( 4 );
}



void Customer_Base::SetBillZip( QString zip )
{
	billZip = zip;
}


QString Customer_Base::GetBillZip()
{
	return billZip;
}

void Customer_Base::SetDBId( DBID id )
{
	dbid = id;
}

DBID Customer_Base::GetDBId() const
{
	return dbid;
}


void Customer_Base::SetContactAddress( QString addr )
{
	contAddress = addr;
}

QString Customer_Base::GetContactAddress()
{
	return contAddress;
}


void Customer_Base::SetContactCity( QString city )
{
	contCity = city;
}

QString Customer_Base::GetContactCity()
{
	return contCity;
}


void Customer_Base::SetContactState( QString state )
{
	contState = state;
}

QString Customer_Base::GetContactState()
{
	return contState;
}


void Customer_Base::SetContactZip( QString zip )
{
	contZip = zip;
}

QString Customer_Base::GetContactZip()
{
	return contZip;
}


void Customer_Base::SetContactCountry( QString country )
{
	contCountry = country;
}

QString Customer_Base::GetContactCountry()
{
	return contCountry;
}


void Customer_Base::SetContactLastName( QString lastName )
{
	contLastName = lastName;
}

QString Customer_Base::GetContactLastName()
{
	return contLastName;
}


void Customer_Base::SetContactFirstName( QString firstName )
{
	contFirstName = firstName;
}

QString Customer_Base::GetContactFirstName()
{
	return contFirstName;
}


void Customer_Base::SetContactEmail( QString email )
{
	contEmail = email;
}

QString Customer_Base::GetContactEmail()
{
	return contEmail;
}


void Customer_Base::SetContactTitle( QString title )
{
	contTitle = title;
}

QString Customer_Base::GetContactTitle()
{
	return contTitle;
}


void Customer_Base::SetContactTelephone( QString tele )
{
	contTelephone = tele;
}

QString Customer_Base::GetContactTelephone()
{
	return contTelephone;
}


void Customer_Base::SetCCExpiration( QDate date )
{
	ccExpDate = date;
}

QDate Customer_Base::GetCCExpiration()
{
	return ccExpDate;
}












int test_Customer_Base()
{
    Customer_Base ba ("Spacely Sprockets Inc.");
    ba.SetAddress( "2112 Future Ln." );
    ba.SetCity( "City of Tommorow" );
    ba.SetState( "New York" );
    ba.SetCountry( "United States of America" );

    ba.SetCCNumber( "0000-5555-5555-5678" );
    ba.SetBillingType( "Credit Card" );

    assert_( ba.GetName() == "Spacely Sprockets Inc." );
    assert_( ba.GetState() == "New York" );
    assert_( ba.GetAddress() == "2112 Future Ln." );
    assert_( ba.GetCCNumber() == "0000-5555-5555-5678" );

    assert_( ba.GetCCNumberHidden() == "****-****-****-****" );
    assert_( ba.GetCCNumberLast4() == "5678" );

    ba.SetCCNumber( "0000999988881234" );
    assert_( ba.GetCCNumberLast4() == "1234" );

    if ( QString("").count() )
    {
        qDebug("I didn't expect this.");
    }

    return 0;
}



// EOF: bill_address_base.cpp

