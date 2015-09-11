/*****************************************************************************
 * guest.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-23
 *
 *****************************************************************************
 */



#ifndef GUEST_H
#define GUEST_H

#include "src/common/common.h"
#include "guest_base.h"



// While it is hypothetically ok to have multiple guests stay under
// one reservation Sudha says she will not support that.

/**
 * The Guest class represents people who stay in the hotel.
 *
 * There isn't a lot of magic here.
 */
class Guest : public Guest_Base
{
    Q_OBJECT

    public:
        /**
         * Stores the guest data into the database.
         *
         * Depending on internal conditions (database id), this
         * function tries to be smart and automatically detect whether
         * this is a new item or one to be updated.
         */
        bool Store();

        /**
         * Add the current guest object to the data store.
         *
         * Returns true if the object was successfully saved.
         * This call should automatically update the internal dbid?
         */
        bool Save();

        /**
         * Updates the guest data in the database.
         *
         * Returns true if the object was successfully changed.
         * The object must contain a valid dbid.
         */
        bool Edit();

        /**
         * Removes the guest data from the database.
         *
         * Returns true if the object was successfully deleted.
         * The object must contain a valid dbid.
         */
        bool Delete();



        /**
         * Returns a newly created Guest object, the name
         * paramaters will be based on the given string.
         *
         * The parsing rules are simple, if a comma occurs in the name
         * everything before the comma is considered the last name.
         * If there is no comma everything after the last space is the
         * last name. Any titles before the first name will be stripped
         * off and put into the title field.
         */
        static Guest* ParseGuestName( QString guestName );


        /* This is impossible.. I screwed up.
         * Returns the customer associated with this guest.
         *
         * Note: Guests must be assigned via a customer object.
         */
        //Customer* GetCustomer();

};


#endif
// EOF: guest.h

