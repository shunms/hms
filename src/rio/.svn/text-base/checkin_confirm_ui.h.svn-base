/*****************************************************************************
 * checkin_confirm_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef CHECKIN_CONFIRM_UI_H
#define CHECKIN_CONFIRM_UI_H

#include "ui_checkin_confirm.h"

#include <QWidget>
#include <QPointer>
#include <rio/room_reservation.h>


class Checkin_Confirm_Ui : public QWidget
{
    Q_OBJECT

    public:
        Checkin_Confirm_Ui( QWidget * parent = 0 );


    public slots:
        /**
         * Loads the GUI with the reservation to check in.
         */
        void SetActiveReservation( QPointer<Room_Reservation> resv );

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
        Ui::Checkin_Confirm_Ui ui;

        QPointer<Room_Reservation> currentResv;


};





#endif
// EOF: checkin_confirm_ui.h

