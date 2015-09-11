/*****************************************************************************
 * room_base.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#ifndef ROOM_INFO_BASE_H
#define ROOM_INFO_BASE_H


#include <QObject>


/**
* The Room_Info_Base class provides the foundation for the
* data attributes of the Room_Info_Base class.
*/
class Room_Info_Base //: public QObject
{
    //Q_OBJECT

    public:

        /**
        * Constructor for Room_Info_Base class.
        */
        Room_Info_Base( );

		/**
        * Destructor for Room_Info_Base class.
        */
        ~Room_Info_Base( );

        /**
        * Sets the room number.
        */
        void SetNumber( int number );

        /**
        * Sets the floor of the room.
        */
        void SetFloor( int floor );

        /**
        * Sets the status of the room.
        */
        void SetStatus( QString status );

        /**
        * Sets the type of the room.
        */
        void SetType( QString type );

		/**
        * Sets the sqare footage of the room.
        */
        void SetSqFootage( int sqFeet );

        /**
        * Sets the number of beds in the room.
        */
        void SetBeds( int beds );

		/**
        * Sets the max. occupants in a room.
        */
        void SetMaxOccupants( int maxOccupants );

        /**
        * Sets the view of the room.
        */
        void SetView( QString view );


        /**
        * Gets the room number.
        */
        int GetNumber( );

        /**
        * Gets the floor of the room.
        */
        int GetFloor( );

        /**
        * Gets the status of the room.
        */
        QString GetStatus( );

        /**
        * Gets the type of the room.
        */
        QString GetType( );

		/**
        * Gets the sqare footage of the room.
        */
        int GetSqFootage( );

        /**
        * Gets the number of beds in the room.
        */
        int GetBeds( );

		/**
        * Gets the max. occupants in a room.
        */
        int GetMaxOccupants( );

        /**
        * Gets the view of the room.
        */
        QString GetView( );



    private:
        int roomNumber;
        int roomFloor;
        QString roomStatus;
        QString roomType;
        int roomSqFeet;
        int roomBeds;
		int roomMaxOccupants;
        QString windowView;

};



#endif

// EOF


