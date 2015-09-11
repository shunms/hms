/*****************************************************************************
 * checkout_confirm_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef CHECKOUT_CONFIRM_UI_H
#define CHECKOUT_CONFIRM_UI_H


#include "ui_checkout_confirm.h"

#include <QWidget>
#include <QPointer>

#include <rio/room_reservation.h>

class Checkout_Confirm_Ui : public QWidget
{
    Q_OBJECT

    public:
        Checkout_Confirm_Ui( QWidget * parent = 0 );


    public slots:
        /**
         * Loads the GUI with the reservation to check out.
         */
        void SetActiveReservation( QPointer<Room_Reservation> resv );

        /**
         * Displays the text of an invoice on the screen.
         */
        void ShowInvoice();

        /**
         * Adds agift certificate to the current reservation.
         */
        void AddGiftCert();

        /**
         * Charges the room fee to the customer, and if
         * successful marks the reservation as paid.
         */
        bool PayCharges();

        /**
         * Changes the widget to show the current reservation data.
         */
        void UpdateView();

        /**
         * Confirms the check-in of the active reservation
         */
        void Confirm();

        /**
         * Cancels the check in operation.
         */
        void Cancel();


    signals:
        /// See Main_Window::ShowScreen()
        void ShowScreen();

        /// See Main_Window::CloseScreen()
        void CloseScreen();

    private:
        Ui::Checkout_Confirm_Ui ui;

        QPointer<Room_Reservation> currentResv;


};



#endif
// EOF: checkout_confirm_ui.h

