/*****************************************************************************
 * room_resv_chooser_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef ROOM_RESV_CHOOSER_UI_H
#define ROOM_RESV_CHOOSER_UI_H

#include "ui_room_resv_chooser.h"

#include <QWidget>
#include <QList>
#include <QPointer>

#include <mainwindow/main_window.h>
#include <rio/room_reservation.h>

class Room_Resv_Chooser_Ui : public QWidget
{
    Q_OBJECT

    public:
        Room_Resv_Chooser_Ui( QWidget* parent = 0 );

    public slots:

        /**
         * Sets the top tab to that given by the parameter.
         */
        void ChangeTab( int tab );


    signals:
        /**
         * See Main_Window::ShowScreen().
         */
        void ShowScreen();

        /**
         * See Main_Window::CloseScreen().
         */
        void CloseScreen();

    private slots:
        /**
         * Reset fields to their default state.
         */
        bool ResetFields();

        /**
         * Allow dates to be used to narrow down the reservation
         * finder.
         */
        void ToggleFindDates( int state );


        /**
         * Allow dates to be used to narrow down the check in
         * finder.
         */
        void ToggleCheckinDates( int state );


        /**
         * Allow dates to be used to narrow down the check out
         * finder.
         */
        void ToggleCheckoutDates( int state );


        /**
         * Fill the new reservation possibilities list with
         * matching data.
         */
        void FillNew();

        /**
         * Fill the find reservations list with matching data.
         */
        void FillFound();

        /**
         * Fill the check in reservations list with matching data.
         */
        void FillCheckins();

        /**
         * Fill the check in reservations list with matching data.
         */
        void FillCheckouts();

        
        void EmptyNew();

        
        void EmptyFound();

        
        void EmptyCheckins();

        
        void EmptyCheckouts();

        
        void EmptyWorkingList();
        
        
        /**
         * Starts the walk in reservation process.
         */
        void BeginWalkin();


        /**
         * This function causes the gui to handle a new reservation
         * item being picked out of the list.
         */
        void PickNewResv( QTreeWidgetItem* item, int column );

        void PickCheckinResv( QTreeWidgetItem* item, int column );

        void PickCheckoutResv( QTreeWidgetItem* item, int column );

        void PickFindResv( QTreeWidgetItem* item, int column );

        
    private:
        
        /**
         * Sets the given reservation object as the current
         * working reservation. If a previous object exists,
         * delete it.
         */
        void LoadWorkingResv( QPointer<Room_Reservation> resv );

	/**
	 * Generates a short list of dummy reservations.
	 */
	void GenDummyList();
        
        
    private:

        Ui::Room_Resv_Chooser_Ui ui;

        QList<Room_Reservation*> currentlyFound;

        QPointer<Room_Reservation> workingResv;
};


#endif
// EOF: room_resv_chooser_ui.h

