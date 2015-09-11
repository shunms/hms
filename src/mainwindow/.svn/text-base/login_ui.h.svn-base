/*****************************************************************************
 * login_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-08
 *
 *****************************************************************************
 */



#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <QWidget>

#include "ui_login.h"


/**
 * The Login_Ui class displays the initial login box.
 *
 */
class Login_Ui : public QWidget
{
    Q_OBJECT

    public:
        Login_Ui( QWidget* parent = 0 );

    public slots:
        /**
         * This slot blanks the username and password widgets.
         */
        void ResetFields();

        /**
         * Uses the Security module to check if the username and
         * password are correct.
         *
         * Returns true if the user is valid.
         */
        bool CheckFields();

        /**
         * Tracks how many bad logins were attempted.
         */
        bool BadLoginAttempt();

    signals:
        /**
         * Triggered when the login succeeds.
         */
        void SuccessfulLogin();

        /**
         * Triggered when the login fails.
         */
        void FailedLogin();

        /**
         * See Main_Window::ShowScreen()
         */
        void ShowScreen();

        /**
         * See Main_Window::CloseScreen()
         */
        void CloseScreen();


    private:

        Ui::Login_Ui ui;

        uint failCount;

};


#endif
// EOF: login_ui.h

