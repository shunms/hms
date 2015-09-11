/*****************************************************************************
 * room_resv_edit_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef ROOM_RESV_EDIT_UI_H
#define ROOM_RESV_EDIT_UI_H

#include "ui_room_resv_edit.h"

#include <QWidget>
#include <QPointer>

#include <mainwindow/main_window.h>
#include <rio/room_reservation.h>
#include <rio/customer.h>
#include <rio/guest.h>


class Room_Resv_Edit_Ui : public QWidget
{
    Q_OBJECT

    public:
        Room_Resv_Edit_Ui( QWidget * parent = 0 );


    public slots:
        /**
         * Sets the given reservation (resv) to be the data source
         * for the visible widgets.
         */
        void SetActiveReservation( QPointer<Room_Reservation> resv );

        /**
         * Sets the given customer to be the data source
         * for the visible widgets.
         */
        void SetActiveGuest( QPointer<Guest> guest );

        /**
         * Sets the given guest to be the data source
         * for the visible widgets.
         */
        void SetActiveCustomer( QPointer<Customer> cust );

        /**
         * Uses the currently active reservation to refresh
         * all of the visible widgets.
         */
        void RefreshView();


        /**
         * Searches/autocompletes a customer name if
         * it is valid.
         */
        void FixupCustomer();

        /**
         * Searches/autocomplets a guest name if it
         * is valid.
         */
        void FixupGuest();

        /**
         * Starts the customer edit screen.
         */
        void EditCustomer();

        /**
         * Starts the guest edit screen.
         */
        void EditGuest();


    signals:
        /// See Main_Window::ShowScreen()
        void ShowScreen();

        /// See Main_Window::CloseScreen()
        void CloseScreen();

        /// Triggered when reservation editing is finished
        void Completed( int status );

    private slots:
        /**
         * Reset fields to their default state.
         */
        bool ResetFields();

        /**
         * Update reservation data.
         */
        bool UpdateReservation();

        /**
         * Stops the editing process and returns the view to the
         * reservation selection screen.
         *
         * @param status The status of the edit/delete of the current view.
         */
        bool YieldScreen( int status );


        /**
         * Cancels the dialog, if the reservation is new it is
         * automatically removed from the database.
         */
        bool Cancel();

        /**
         * Lets the dialog know that customer name has been changed.
         */
        bool CustomerNameChanged();

        /**
         * Lets the dialog know that guest name has been changed.
         */
        bool GuestNameChanged();


    private:

        Ui::Room_Resv_Edit_Ui ui;

        QPointer<Room_Reservation> currentResv;
        QPointer<Guest> currentGuest;
        QPointer<Customer> currentCustomer;

        bool guestChanged;
        bool custChanged;
};


#endif
// EOF: room_resv_edit_ui.h

