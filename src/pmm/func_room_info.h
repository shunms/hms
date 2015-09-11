/*****************************************************************************
 * func_room_info.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#ifndef FUNC_ROOM_INFO_H
#define FUNC_ROOM_INFO_H


#include <QObject>

#include "common/common.h"


/**
* The Func_Room_Info class provides the foundation for the
* data attributes of the Func_Room_Info.
*/

class Func_Room_Info //: public QObject
{
    //Q_OBJECT

    public:

        /**
        * Constructor for Restaurant_Info class.
        */
        Func_Room_Info( );

		/**
        * Destructor for Restaurant_Info class.
        */
        ~Func_Room_Info( );


        /**
        * Sets the function room rate.
        */
        void SetFuncRoomName( QString name );

		/**
        * Sets the function room number.
        */
        void SetFuncRoomNum( QString number );

        /**
        * Sets the function room capacity.
        */
        void SetFuncRoomCapacity( int capacity );

        /**
        * Sets the function room hourly rate.
        */
        void SetFuncRoomRate( Price rate );


        /**
        * Gets the function room rate.
        */
        QString GetFuncRoomName( );

		/**
        * Gets the function room number.
        */
        QString GetFuncRoomNum( );

        /**
        * Gets the function room capacity.
        */
        int GetFuncRoomCapacity( );

        /**
        * Gets the function room hourly rate.
        */
        Price GetFuncRoomRate( );



    private:
		QString funcRoomName;
		QString funcRoomNumber;
		int		funcRoomCapacity;
		Price	hourRate;
 
};



#endif

// EOF






