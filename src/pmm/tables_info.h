/*****************************************************************************
 * tables_info.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-24
 *
 ******************************************************************************/



#ifndef TABLES_INFO_H
#define TABLES_INFO_H


#include <QObject>


/**
* The Tables_Info class provides the foundation for the
* data attributes of the Tables_Info class.
*/

class Tables_Info //: public QObject
{
    //Q_OBJECT

    public:

        /**
        * Constructor for Restaurant_Info class.
        */
        Tables_Info( );

		/**
        * Destructor for Restaurant_Info class.
        */
        ~Tables_Info( );


        /**
        * Sets the restaurant number of the table.
        */
        void SetTableRestNum( QString number );

		/**
        * Sets the table number.
        */
        void SetTableNum( QString number );

        /**
        * Sets the table capacity.
        */
        void SetTableCapacity( int capacity );



        /**
        * Gets the restaurant number of the table.
        */
        QString GetTableRestNum( );

		/**
        * Gets the table number.
        */
        QString GetTableNum( );

        /**
        * Gets the table capacity.
        */
        int GetTableCapacity( );



    private:
		QString restNumber;
		QString tableNumber;
		int		tableCapacity;
 
};



#endif

// EOF

