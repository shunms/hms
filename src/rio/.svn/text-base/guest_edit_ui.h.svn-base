/*****************************************************************************
 * guest_edit_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef GUEST_EDIT_UI_H
#define GUEST_EDIT_UI_H

#include "ui_guest_edit.h"

#include <QWidget>
#include <QPointer>
#include <rio/guest.h>

class Guest_Edit_Ui : public QWidget
{
    Q_OBJECT

    public:
        Guest_Edit_Ui( QWidget * parent = 0 );


    public slots:

        /**
         * Sets the given guest as the the data source for this object's
         * visisble widgets.
         */
        void SetActiveGuest( QPointer<Guest> guest );

        /**
         * Uses the currently active guest to refresh all of the
         * visible widgets.
         */
        void RefreshView();


    signals:

        /// See Main_Window::ShowScreen()
        void ShowScreen();

        /// See Main_Window::CloseScreen()
        void CloseScreen();

        /// Triggered when the guest is done being edited.
        void Completed( int status );


    private slots:

        /**
         * Resets all fields to a default value.
         */
        bool ResetFields();

        /**
         * Updates the data.
         */
        bool UpdateGuest();

        /**
         * Stops the editing process and gives the screen back
         * to the reservation edit process.
         *
         */
        bool YieldScreen( int status );


    private:
        Ui::Guest_Edit_Ui ui;

        QPointer<Guest> currentGuest;
};


#endif
// EOF: guest_edit_ui.h

