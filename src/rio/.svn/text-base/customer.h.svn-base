/*****************************************************************************
 * customer.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-23
 *
 *****************************************************************************
 */



#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "src/common/common.h"
#include "customer_base.h"

#include <rio/guest.h>


/**
 * The Customer class represents entities that pay for stays in the hotel.
 *
 * Each Guest in the hotel must be associated with only one customer.
 */
class Customer : public Customer_Base
{
    Q_OBJECT

    public:
        /**
         * Add the current customer data to the database.
         *
         * Returns true if the object was successfully saved.
         * This call should automatically update the internal dbid?
         */
        bool Store();

        /**
         * Creates a new entry in the dabase.
         *
         * Returns true if the object was successfully saved.
         * This call should automatically update the internal dbid?
         */
        bool Save();


        /**
         * Updates the customer data in the database.
         *
         * Returns true if the object was successfully changed.
         * The object must contain a valid dbid.
         */
        bool Edit();

        /**
         * Removes the customer data from the database.
         *
         * Returns true if the object was successfully deleted.
         * The object must contain a valid dbid.
         */
        bool Delete();

        /**
         * Adds a guest to this customer.
         */
        bool AddGuest( Guest* guest );

        /**
         * Returns a list of all guests associated with this customer.
         */
        QList<Guest*> GetGuests();

};


#endif
// EOF: customer.h

