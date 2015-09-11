/*****************************************************************************
 * room_reservation_log.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-11
 *
 *****************************************************************************
 */



#ifndef ROOM_RESERVATION_LOG_H
#define ROOM_RESERVATION_LOG_H

#include <QObject>
#include <QDateTime>


#include "src/common/common.h"


/**
 * Room_Reservation_Log class tracks changes to a given reservation
 * over time.
 *
 * The structure of a log is simple. It consists of a date+time timestamp and
 * a log message. The message consists of a head and body.
 * The head can be one of a number of strings, some of the headers,
 * such as FEE, have bodies which are formatted and can be parsed down
 * into pieces that are usable to the system.
 *
 * Each message is also human-readable and should be suitable to be printed,
 * or view on screen by a user of the software, to get a overview
 * of the life of a room reservation.
 *
 * Logs many only be added to a reservation, never removed. If a fee needs
 * to be backed out, the system should simply apply another fee with the
 * negative of the value to be reversed.
 *
 */
class Room_Reservation_Log : public QObject
{
    Q_OBJECT

    public:


        /**
         * Basic constructor.
         *
         * The log message will be left blank. Time timestamp will be
         * set to the current time.
         */
        Room_Reservation_Log( QObject* parent = 0 );

        /**
         * Constructructor with message.
         *
         * Creates a log with the given message. Date will be set to
         * the current time.
         */
        Room_Reservation_Log( QString msg, QObject* parent = 0 );

        /**
         * Constructor with message and timestamp.
         *
         * Creates a log with both a given message and a given timestamp.
         */
        Room_Reservation_Log( QString msg, QDateTime timestamp,
                              QObject* parent = 0 );

        /**
         * Sets the log timestamp to the given timestamp.
         */
        void SetTimestamp( QDateTime timestamp );

        /**
         * Sets the log message.
         */
        void SetMessage( QString message );

        /**
         * Returns the log message's timestamp.
         */
        QDateTime GetTimestamp() const;

        /**
         * Returns the log message.
         */
        QString GetMessage() const;

        /**
         * Returns the header section of the log message.
         */
        QString GetHead();

        /**
         * Returns the body section of the log message
         */
        QString GetBody();

        /**
         * Validates the log message.
         *
         * If the log message header is known, and the body format
         * matches the header this function will return true.
         */
        bool IsValid();

        /**
         * Does this log correspond to a charged fee?
         *
         * Returns true if the log message is a fee charge.
         */
        bool IsFee();




        /**
         * Returns the price value of a fee log message.
         *
         * If the message is not a fee log message (see IsFee()) then
         * the return value of this function is undefined.
         */
        Price GetFeePrice();

        /**
         * Returns the reason for a fee.
         *
         * If the message is not a fee log message (is IsFee()) then
         * the return value of this message is undefined.
         */
        QString GetFeeReason();


        /**
         * Returns the timestamp and the message in a formatted style.
         */
        QString Formatted( Qt::DateFormat datefmt = Qt::TextDate );


        /**
         * Does the log correspond to a state changed log?
         *
         * Return true if the log message is a state change message.
         */
        bool IsState();

        /**
         * Returns the previous state name.
         */
        QString GetPreviousState();

        /**
         * Return the state transitionsed to.
         */
        QString GetNextState();

        /**
         * Does the log correspond to a new log message?
         */
        bool IsNew();

        /**
         * Does the log correspond to a note log message?
         */
        bool IsNote();

        /**
         * Does the log correspond to a edit log message?
         */
        bool IsEdit();

        /**
         * Return the name of the attribute changed.
         */
        QString GetEditAttr();

        /**
         * Return a string that displays the value of the attribute changed.
         */
        QString GetEditValue();

        /**
         * Does the log message correpsond to a checkin?
         * No special getter here, the entire body shall be the guest name.
         */
        bool IsCheckin();


        /**
         * Does the log message correpsond to a checkout?
         * No special getter here, the entire body shall be the guest name.
         */
        bool IsCheckout();






    private:

        /**
         * Seperates the head and body parts of a log message.
         */
        bool SplitParts( QString& head, QString& body );

        QDateTime timestamp;
        QString message;
};



#endif
// EOF: room_reservation_log.h

