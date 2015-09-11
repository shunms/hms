/*****************************************************************************
* bill_address_base.h - header file
*
* Author: John Mulligan <phlogistonjohn@yahoo.com>
* Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
*
* Created: 2006-04-15
*
*****************************************************************************
*/



#ifndef BILL_ADDRESS_BASE_H
#define BILL_ADDRESS_BASE_H


#include <QObject>
#include <QDate>
#include "src/common/common.h"

/**
* The Customer_Base class provides the foundation for the
* data attributes of the Customer class.
*/
class Customer_Base : public QObject
{
    Q_OBJECT

    public:

        /**
        * Basic constructor.
        */
        Customer_Base( QObject * parent = 0 );

        /**
        * Constructor that accepts the name of the customer
        */
        Customer_Base( const QString name, QObject * parent = 0 );

        /**
        * Sets the company/entity name.
        */
        void SetName( QString name );

        /**
        * Sets the address part of the billing address.
        */
        void SetAddress( QString address );

        /**
        * Sets the city part of the billing address.
        */
        void SetCity( QString city );

        /**
        * Sets the state part of the bling address.
        */
        void SetState( QString state );

        /**
        * Sets the country part of the billing adderess.
        */
        void SetCountry( QString country );

        /**
        * Sets the credit card number, used for automatic billing.
        */
        void SetCCNumber( QString ccnumber );

        /**
        * Sets the entities billing preference.
        *
        * This can be values such as "Credit Card", "Check" etc.
        * For extensibility purposes this is a string. Higher level
        * layers have to validate the value.
        */
        void SetBillingType( QString type );

        /**
        * Gets the name attribute.
        */
        QString GetName();

        /**
        * Gets the address line attribute.
        */
        QString GetAddress();

        /**
        * Gets the address city attribute.
        */
        QString GetCity();

        /**
        * Gets the address state attribute.
        */
        QString GetState();

        /**
        * Gets the address country attribute.
        */
        QString GetCountry();

        /**
        * Gets the Credit card number.
        */
        QString GetCCNumber();

        /**
        * Gets the billing type attribute.
        */
        QString GetBillingType();

        /**
        * Returns the credit card number with the numerals replaced by
        * stars.
        *
        * @param mark changes the character each numeral is replaced by.
        * If the credit card number is not set, the resulting string should
        * be empty.
        */
        QString GetCCNumberHidden( QString mark = "*" );

        /**
        * Returns the last four digits of the credit card number.
        *
        * If the credit card number is not set, the result string should
        * be empty.
        */
        QString GetCCNumberLast4();



        ///Set the billing zip code
        void SetBillZip( QString zip );

        ///Get the billing zip code
        QString GetBillZip();


        /// Setter for db id
        void   SetDBId( DBID id );

        /// Getter for db id
        DBID   GetDBId() const ;




        /// getter for cont. address
        QString GetContactAddress();

        /// getter for cont. address
        QString GetContactCity();

        /// getter for cont. address
        QString GetContactState();

        /// getter for cont. address
        QString GetContactZip();

        /// getter for cont. address
        QString GetContactCountry();

        /// getter for cont. first name
        QString GetContactFirstName();

        /// getter for cont. lst name
        QString GetContactLastName();

        /// getter for cont. email
        QString GetContactEmail();

        /// getter for cont. title
        QString GetContactTitle();

        /// getter for cont. tele
        QString GetContactTelephone();




        /// Setter for cont. address
        void SetContactAddress( QString addr );

        /// Setter for cont. address
        void SetContactCity( QString city );

        /// Setter for cont. address
        void SetContactState( QString state );

        /// Setter for cont. address
        void SetContactZip( QString zip );

        /// Setter for cont. address
        void SetContactCountry( QString country );

        /// Setter for cont. first name
        void SetContactFirstName( QString firstName );

        /// Setter for cont. lst name
        void SetContactLastName( QString lastName );

        /// Setter for cont. email
        void SetContactEmail( QString email );

        /// Setter for cont. title
        void SetContactTitle( QString title );

        /// Setter for cont. tele
        void SetContactTelephone( QString tele );


        /// getter for cc expiration date
        QDate GetCCExpiration();

        /// setter for cc expiration date
        void  SetCCExpiration( QDate date );

    private:
        QString name;

        QString billAddress;
        QString billCity;
        QString billState;
        QString billZip;
        QString billCountry;

        QString contAddress;
        QString contCity;
        QString contState;
        QString contZip;
        QString contCountry;

        QString contFirstName;
        QString contLastName;
        QString contEmail;
        QString contTitle;
        QString contTelephone;

        QString ccNumber;
        QString billType;
        QDate   ccExpDate;


        DBID dbid;
};


/**
* A set of unit tests for the Customer_Base class.
*/
int test_Customer_Base();

#endif
// EOF: bill_address_base.h

