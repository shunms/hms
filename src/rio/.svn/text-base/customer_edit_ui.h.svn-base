/*****************************************************************************
 * customer_edit_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-29
 *
 *****************************************************************************
 */



#ifndef CUSTOMER_EDIT_UI_H
#define CUSTOMER_EDIT_UI_H

#include "ui_customer_edit.h"

#include <rio/customer.h>

class Customer_Edit_Ui : public QWidget
{
    Q_OBJECT

    public:
        Customer_Edit_Ui( QWidget * parent = 0 );


        /**
         * Sets the given guest as the the data source for this object's
         * visisble widgets.
         */
        void SetActiveCustomer( QPointer<Customer> cust );

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

        /// Triggered when the customer is done being edited.
        void Completed( int status );


    private slots:

        /**
         * Resets all fields to a default value.
         */
        bool ResetFields();

        /**
         * Updates the data.
         */
        bool UpdateCustomer();

        /**
         * Stops the editing process and gives the screen back
         * to the reservation edit process.
         *
         */
        bool YieldScreen( int status );



    private:
        Ui::Customer_Edit_Ui ui;

        QPointer<Customer> currentCustomer;



};


#endif
// EOF: customer_edit_ui.h

