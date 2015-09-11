/******************************************************************************
 * room_reservation_base.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-10
 *
 *****************************************************************************
 */



#ifndef ROOM_RESERVATION_BASE_H
#define ROOM_RESERVATION_BASE_H

#include <QObject>
#include <QDate>
#include "src/common/common.h"

/**
 * Base class for room reservation objects.
 *
 * This base class contains all the data attributes needed by the
 * Room_Reservation class. Room Reservation objects represents rooms that
 * have been reserved for a certain period. See the Room_Reservation class
 * for the logical methods that apply to the data structure.
 */
class Room_Reservation_Base : public QObject
{
    Q_OBJECT

    public:

        /** Room Reservation states enumerate all the possible
         * statuses that a Room Reservation can have.
         */
        enum State
        {
            /**
             * The reservation is ready to have visitors to the hotel
             * check in.
             */
            Ready,
            /**
             * The reservation is old, visistors have been checked out
             */
            Complete,
            /**
             * There are currently guests staying in the hotel under
             * this reservation.
             */
            Active,
            /**
             * The reservation is ready but it is past the check-in date
             * and no guests have checked in.
             */
            Late,
            /**
             * The reservation was cancelled.
             */
            Canceled
        };


    public:
        Room_Reservation_Base( QObject * parent = 0 );


        /// Setter for dbid attribute
        void SetDBId( DBID dbid );

        /// Setter for date created attribute
        void SetDateCreated( QDate date );

        /// Setter for room attribute
        void SetRoomNumber( int room );

        /// Setter for start date attribute
        void SetStartDate( QDate date );

        /// Setter for end date attribute
        void SetEndDate( QDate date );

        /// Setter for state attribute
        void SetState( State state );

        /// Setter for paid status attribute
        void SetPaid( bool haspaid );

        /// Setter for type attribute
        void SetType( int type );

        //-/// Setter for description attribute
        //void SetDescription( QString& descr );

        //-/// Setter for descriptoin attribute
        //void SetDescription( const QString descr );

        /** Setter for state attribute
         *
         * Automatically converts from int to State.
         * Numeric conversions:
         * - 0 = Ready
         * - 1 = Complete
         * - 2 = Active
         * - 3 = Late
         * - 4 = Canceled
         * - Any other value = Complete
         */
        void SetState( int state );

        /// Getter for db id
        int   GetDBId() const ;

        /// Getter for date created
        QDate GetDateCreated() const ;

        /// Getter for room number
        int   GetRoomNumber() const ;

        /// Getter for start date
        QDate GetStartDate() const ;

        /// Getter for end date
        QDate GetEndDate() const ;

        /// Getter for state
        State GetState() const ;

        /// Getter for paid status
        bool  GetPaid() const ;

        /// Getter for reservation type
        int   GetType() const ;

        //-/// Getter for description
        //QString& GetDescription();

        /** Returns a informational string about the object.
         *
         * The function returns a short status string naming the object's
         * class, and some pertienet attributes.
         * Mainly useful for printing debug status messages.
         */
        QString Ident() const;


    private:
        DBID dbid;

        QDate    dateCreated;
        int      roomNumber;
        QDate    startDate;
        QDate    endDate;
        State    state;
        bool     paid;
        int      type;
        // QString  description; //oops this is part of the log



};



#endif
// EOF: room_reservation_base.h

