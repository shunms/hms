/*****************************************************************************
 * restaurant_info.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#ifndef RESTAURANT_INFO_H
#define RESTAURANT_INFO_H


#include <QObject>


/**
* The Restaurant_Info class provides the foundation for the
* data attributes of the Restaurant_Info class.
*/

class Restaurant_Info //: public QObject
{
    //Q_OBJECT

    public:

        /**
        * Constructor for Restaurant_Info class.
        */
        Restaurant_Info( );

		/**
        * Destructor for Restaurant_Info class.
        */
        ~Restaurant_Info( );


        /**
        * Sets the restaurant number.
        */
        void SetRestNum( QString number );

		/**
        * Sets the restaurant type.
        */
        void SetRestType( QString type );

        /**
        * Sets number of tables in the reastaurant.
        */
        void SetNumTables( int number );

		/**
        * Sets notes for the restaurant.
        */
        void SetRestNotes( QString notes );


		/**
        * Gets the restaurant number.
        */
        QString GetRestNum( );

		/**
        * Gets the restaurant type.
        */
        QString GetRestType( );

        /**
        * Gets number of tables in the reastaurant.
        */
        int GetNumTables( );

		/**
        * Gets notes for the restaurant.
        */
        QString GetRestNotes( );


    private:
		QString restNumber;
		QString restType;
		int		numTables;
        QString restNotes;
 
};



#endif

// EOF

