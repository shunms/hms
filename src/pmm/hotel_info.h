/*****************************************************************************
 * hotel_info.h - header file
 *
 * Author: Savitha Patil <patilsavitha@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-16
 *
 ******************************************************************************/


#ifndef HOTEL_INFO_H
#define HOTEL_INFO_H

#include <QTableWidget>
#include <QComboBox>
#include <QDebug>
#include <QtGui>

#include "common/common.h"
#include "tablecombobox.h"
#include "ui_hotel_info.h"
#include "hotel_base.h"
#include "owner_base.h"
#include "room_base.h"
#include "room_types_base.h"
#include "rates_increase.h"
#include "restaurant_info.h"
#include "tables_info.h"
//#include "func_room_info.h"
//#include "golf_info.h"

class Hotel_Info_Ui : public QWidget
{
    Q_OBJECT

    public:
        /**
        * Constructor for Hotel_Info_Ui class.
        */
        Hotel_Info_Ui( QWidget * parent = 0 );


    signals:
        void SetupComplete();

	private slots:

        /**
		* Saves the property information entered when SAVE button is clicked.
        */
		//void SavePropertyInfo( );

		/**
		* Takes the hotel information entered 
        */
		void SaveHotelInfo( );

		/**
		* Takes the owner information entered 
        */		
		void SaveOwnerInfo( );

		/**
		* Adds a new row in the owner information table when 'Add Owner' button is clicked.
        */
		void AddOwner( );

		/**
		* Deletes the current row in the owner information table when 'Delete Owner' button is clicked.
        */
		void DeleteOwner( );

		/**
		* Adds a new row in the room types information table when 'Add Room Type' button is clicked.
        */
		void AddRoomType( );

		/**
		* Deletes the current row in the room types information table when 'Delete Room Type' button is clicked.
        */
		void DeleteRoomType( );

        /**
		* Saves the room types information entered when 'Save Room Types' button is clicked.
        */
		void SaveRoomTypes( );

		/**
		* Adds a new row in the rooms information table when 'Add Room' button is clicked.
        */
		void AddRoom( );

		/**
		* Deletes the current row in the rooms information table when 'Delete Room' button is clicked.
        */
		void RemoveRoom( );

		void SaveRoomInfo( );

		void AddRestaurant();

		void RemoveRestaurant();

		void SaveRestaurants();

		void AddRestTable();

		void RemoveRestTable();

		void SaveRestTableInfo();

    private:

		Hotel_Info_Base	 hotelOb;

		QList<Owner_Info_Base*> owners;

		QList<Room_Info_Base*>	rooms;

		QList<Room_Types_Base*>	 roomTypes;

		Rates_Increase	 rateIncOb;

		QList<Restaurant_Info*> restaurants;
		
		QList<Tables_Info*> tables;
		
		//QList<Func_Room_Info*> funcRooms;

		//Golf_Info golfOb;

		QList<TableComboBox*> roomStatusBoxes;

		QList<TableComboBox*> roomTypeBoxes;

		int	ownerNum;
		int	roomTypeNum;
		int roomNum;
		int restNum;
		int tableNum;

        Ui::Hotel_Info_Ui ui;
};


#endif

// EOF


