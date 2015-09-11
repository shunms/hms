/*****************************************************************************
 * customer_base.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-15
 *
 *****************************************************************************
 */



#ifndef CUSTOMER_BASE_H
#define CUSTOMER_BASE_H

#include <QObject>
#include <QDate>
#include "src/common/common.h"

/** Base class containing data for a Customer object.
 *
 * The customer objects will represent the entity that stays in the hotel.
 * This can be synonymous with a guest or a visitor.
 * This class only implements the data attributes. See Customer class
 * for the logical methods that apply to the class.
 */
class Guest_Base : public QObject
{
    Q_OBJECT

    public:

        /// Represents the sex/gender of a person.
        enum Sex
        {
            Male,
            Female
        };

        /// Setter for lastName attribute
        void SetLastName( QString lastName );

        /// Setter for firstName attribute
        void SetFirstName( QString firstName );

        /// Setter for title attribute
        void SetTitle( QString title );

        /// Setter for d-o-b attribute
        void SetDateOfBirth( QDate dateOfBirth );

        /// Setter for sex attribute
        void SetSex( Sex sex );

        /// Setter for notes attribute
        void SetNotes( QString Notes );

        /** Setter for sex attribute
         *
         * This setter takes an int parameter and converts it converts
         * it to Sex behind-the-scenes. 0 for male, elsewise female.
         */
        void SetSex( int sex );


        /// Getter for lastName
        QString GetLastName();

        /// Getter for firstName
        QString GetFirstName();

        /// Getter for title
        QString GetTitle();

        /// Getter for d-o-b
        QDate   GetDateOfBirth();

        /// Getter for sex
        Sex     GetSex();

        /// Getter for notes
        QString GetNotes();

        /// Setter for db id
        void   GetDBId( DBID id ) const ;

        /// Getter for db id
        DBID   GetDBId() const ;

    private:
        QString lastName;
        QString firstName;
        QString title;
        QDate dateOfBirth;
        Sex     sex;
        QString notes;

        DBID dbid;
};


int test_Guest_Base();


#endif
// EOF: customer_base.h

