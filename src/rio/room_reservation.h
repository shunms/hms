/*****************************************************************************
 * room_reservation.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-11
 *
 *****************************************************************************
 */



#ifndef ROOM_RESERVATION_H
#define ROOM_RESERVATION_H

#include "room_reservation_base.h"

#include <QList>
#include <QString>

#include <common/common.h>
#include <rio/customer.h>
#include <rio/guest.h>
#include <rio/room_reservation_log.h>

//FIXME: remove these
//typedef int Customer;
//typedef int Guest;




/**
 * The Room_Reservation class represents a single reserved room in
 * the hotel.
 *
 * Room reservation relys on the database to store and retrieve objects.
 * To operate on single reservations use the methods Store, Edit, and Delete.
 * Other operations may require you to deal with lists of Room_Reservation
 * objects.
 *
 * To get a single Reservation directly use the static member
 * GetReservation().
 */
class Room_Reservation : public Room_Reservation_Base
{

    public:

        /**
         * Updates the reservation data for room, fromDate and toDate if
         * the room can be reserved for the given dates.
         *
         * Returns true if the room can be reserved on the dates given.
         * if it returns true the internal values for room, and the dates
         * are updated, but are left unchanged if they are false.
         *
         * If room is not a valid room number for the hotel, the function
         * should return false.
        */
        bool ReserveFor( int room, QDate fromDate, QDate toDate );

        /**
         * Logs a message to the reservation.
         *
         * Returns true if the message was successfully saved. This method
         * accepts a Room_Reservation_Log object and appends it to the
         * log.
         */
        bool AddLog( Room_Reservation_Log& log ) const;

        /**
         * Logs a message to the reservation.
         *
         * Returns true if the message was successfully saved. This method
         * automatically creates a Room_Reservation_Log from the given
         * strings.
        */
        bool AddLog( QString head, QString body ) const;


        //GetLog();

        /**
         * Charges a fee to the room.
         *
         * Returns true if the charge is successfully
         * applied to the room reservation. To apply discounts simply
         * apply a negative charge to the reservation.
        */
        bool Charge( Price value, QString& reason ) const;

        /**
         * Caclulates the final fee to be charged for the entire stay.
        */
        Price CaclulateFinalFee() const;


        /**
         * Lists all of the logs added to this reservation.
         *
         * Returns a list of Room_Reservation_Log objects.
        */
        QList<Room_Reservation_Log> ListLogs() const;

        /**
         * Lists all of the charges/discounts applied to the reservation.
         *
         * Returns a list of Room_Reservation_Log objects. Each object returned
         * shall be a FEE Log and thus the function IsFee() will return true.
        */
        QList<Room_Reservation_Log> ListFees() const;

        /**
         * Associates a given customer object with the Room Reservation.
         *
         * If cust is not already stored in the reservation the function will
         * fail. This also applies to reservations that already have a
         * customer associated with them.
         * */
        bool SetCustomer( Customer* cust );

        /**
         * Associates a guest with a Room Reservation.
         */
        bool SetGuest( Guest* guest );

        /**
         * Returns true if the reservation already has been assoicated with
         * a customer.
         */
        bool HasCustomer() const;

        /**
         * Returns true if the reservation has at least one guest associated
         * with it.
         */
        bool HasGuests() const;

        /**
         * Returns the customer associated with the current reservation.
         *
         * All of these objects will be newly allocated. They must be cleaned
         * up at a higher level in the code.
         */
        Customer* GetCustomer();

        /**
         * Returns the guest associated with current reservation.
         *
         * All of these objects will be newly allocated. They must be cleaned
         * up at a higher level in the code.
         */
        Guest* GetGuest();

        /**
         * Stores the reservation data in the database.
         *
         * This function tries to be smart and will call either
         * Edit() or Save() depending on whether there is a valid,
         * existing database id. In other words it will save new reservations
         * and subsequent calls should update the database.
         */
        bool Store();

        /**
         * Saves a new reservation into the database.
         *
         * If the reservation has already been stored, or anything else
         * cannot be saved the function will reaturn false.
         *
         */
        bool Save();

        /**
         * Updates the reservation data in the database.
         *
         * If the reservation cannot be updated the function will return
         * false.
         */
        bool Edit();

        /**
         * Deletes the current reservation from the database.
         *
         * If the object is stored in the database the data will be
         * removed and the function will return true.
         */
        bool Delete();



        /**
         * Tells the system that this is a new reservation.
         */
        void SetNew( bool isNew = true );

        /**
         * Returns true if this is a new reservation.
         */
        bool IsNew() const;


        /**
         * Returns the name of the guest associated with this reservation.
         *
         * If there is no guest attached to the resv, it will return an
         * empty string.
         */
        QString GuestName();


        /**
         * Return the name of the customer associated with this reservation.
         *
         * If there is no cust. attached to the resv, it will return an
         * empty string.
         */
        QString CustomerName();

        /**
         * Returns the name of the current state as a string.
         */
        QString StateString() const;

        /**
         * Testing function that assigns the reservation some
         * random parameters.
         *
         */
        void GenerateRandomData();


        /**
         * Change the state of the reservation from Ready to Active.
         * Returns false if the change can not be made.
         */
        bool MakeActive();

        /**
         * Change the state of the reservation from Ready/Late to Active.
         * Returns false if the change can not be made.
         */
        bool MakeComplete();

        /**
         * Cancels the reservation (changing it's state).
         * Returns false if the change can not be made.
         */
        bool Cancel();

        /**
         * Checks the reservation in changing it's state from Ready to
         * Active and creating a check-in log message.
         * Returns false if the change can not be made.
         */
        bool CheckIn();

        /**
         * Checks the reservation out changing it's state from Active to
         * Complete and creating a check-in log message.
         * Returns false if the change can not be made.
         */
        bool CheckOut();

        /**
         * Changes the reservation's state from ready to late.
         * Returns false if the change can not be made.
         * Generates a log message for the change.
         */
        bool MakeLate();

    public:

        /**
         * Retrieves a Room_Reservation object from the database given
         * an id.
         *
         * This static member takes an allocated (but empty) reservation
         * object and updates it with data from the database.
         */
        static bool GetReservation( DBID id, Room_Reservation* resv );


    private:

        /**
         * Saves all logs to the database that have been queued.
         */
        bool CommitLogs();


    private:
        bool newStatus;

        QList<Room_Reservation_Log> logsToAppend;

        QList<Guest> cacheGuests;
        QPointer< Customer > cacheCustomer;
};


typedef QList<Room_Reservation*> Room_Reservation_List;


#endif
// EOF: room_reservation.h

