/*****************************************************************************
 * login_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-08
 *
 *****************************************************************************
 */


#include <QMessageBox>
#include <QDebug>

#include "login_ui.h"
#include "src/mainwindow/main_window.h"



Login_Ui::Login_Ui( QWidget * parent ) : QWidget( parent )
{
    failCount = 0;
    ui.setupUi( this );

    connect( ui.loginButton, SIGNAL( clicked() ),
             this, SLOT( CheckFields() ) );

    connect( ui.cancelButton, SIGNAL( clicked() ),
             this, SLOT( ResetFields() ) );


    connect( this, SIGNAL( FailedLogin() ),
             this, SLOT( BadLoginAttempt() ) );

    connect( ui.username, SIGNAL( returnPressed() ),
             this, SLOT( CheckFields() ) );
    connect( ui.password, SIGNAL( returnPressed() ),
             this, SLOT( CheckFields() ) );


    connect( this, SIGNAL( ShowScreen() ),
             this, SLOT( ResetFields() ) );

}


void Login_Ui::ResetFields()
{
    ui.username->clear();
    ui.password->clear();
    ui.username->setFocus();
}


bool Login_Ui::CheckFields()
{
    Security_Mgr* security = Main_Window::Security();

    //this guy needs to talk to security module
    qDebug( "Talking to security module..." );

    if ( security->Login( ui.username->text(), ui.password->text() ) )
    {

        emit SuccessfulLogin();
        qDebug( "Login = OK" );
        return true;
    }

    QMessageBox::warning( this, "Failed to Log In",
                        "Please make sure that your username and password"
                        " are correct and try again" );

    emit FailedLogin();
    return false;
}

bool Login_Ui::BadLoginAttempt()
{
    failCount++;
    qDebug() << "Failed login attempt #" << failCount ;

    ui.password->clear();
    ui.password->setFocus();

    return true;
}


// EOF: login_ui.cpp

