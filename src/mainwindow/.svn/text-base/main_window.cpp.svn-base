/*****************************************************************************
 * main_window.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-08
 *
 *****************************************************************************
 */


#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <QSettings>


#include <common/common.h>
#include "main_window.h"


#include <mainwindow/login_ui.h>
#include <mainwindow/browserlaunch.h>

//---------------------------------------------------------
// Module Includes for RIO
//---------------------------------------------------------
#include <rio/room_resv_chooser_ui.h>
#include <rio/room_resv_edit_ui.h>
#include <rio/guest_edit_ui.h>
#include <rio/customer_edit_ui.h>
#include <rio/checkin_confirm_ui.h>
#include <rio/checkout_confirm_ui.h>


Main_Window* Main_Window::self = 0;


Main_Window::Main_Window( QWidget * parent, Qt::WFlags flags )
    : QMainWindow( parent, flags )
{
    //basic setup actions
    ui.setupUi( this );

    //set master self-referentail pointer!
    // If I had half a brain, I'd read up on how to do a real singleton
    // in C++
    Main_Window::SetSelf( this );


    QSettings settings("Softlinks", "Hotel Management System");

    // these generic keys should probably be stored in a header
    // somewhere, but oh, well
    if ( not settings.contains( "db/host" ) )
    {
        qDebug("Filling settings with default values.");
        settings.setValue( "db/host", "localhost" );
        settings.setValue( "db/name", "Softlinks" );
        settings.setValue( "db/username", "default"  );
        settings.setValue( "db/password", "password" );
    }

    QString host = settings.value( "db/host" ).toString();
    QString name = settings.value( "db/name" ).toString();
    QString username = settings.value( "db/username" ).toString();
    QString password = settings.value( "db/password" ).toString();

    // magic, or is it?
    dbMgr = new Db_Mgr;
    dbMgr->ConnectToDb( host, name, username, password );

    securityMgr = new Security_Mgr( this );



    //shortcuts for the common actions
    ui.actionQuit->setShortcut( tr("Ctrl+Q") );
    ui.actionPrint->setShortcut( tr("Ctrl+P") );
    ui.actionLogout->setShortcut( tr("Ctrl+O") );

    //rack em UP! Its widget time...
    //QWidget* temp;

    // the login screen
    QWidget* temp = new Login_Ui( this );
    AddScreenWidget( "Login_Ui", temp );
    //make the login window show up by default
    ChangeCurrentWidget( temp );


    // the hotel default screen
    AddScreenWidget( "Default_View_Ui", new Default_View_Ui(this) );


    // the system about screen
    AddScreenWidget( "About_Ui", new About_Ui(this) );


    // the softlinks team
    AddScreenWidget( "Softlinks_Ui", new Softlinks_Ui(this) );



    //------------------------------------------------------------
    // Screens for RIO
    //------------------------------------------------------------

    AddScreenWidget( "Room_Resv_Chooser_Ui",
                     new Room_Resv_Chooser_Ui(this) );


    AddScreenWidget( "Room_Resv_Edit_Ui",
                     new Room_Resv_Edit_Ui(this) );


    AddScreenWidget( "Guest_Edit_Ui",
                     new Guest_Edit_Ui(this) );

    AddScreenWidget( "Customer_Edit_Ui",
                     new Customer_Edit_Ui(this) );

    AddScreenWidget( "Checkin_Confirm_Ui",
                     new Checkin_Confirm_Ui(this) );


    AddScreenWidget( "Checkout_Confirm_Ui",
                     new Checkout_Confirm_Ui(this) );





    //disable some actions
    ui.actionPrint->setEnabled(0);

    //disable all "module" top level menus
    DisableMenus();

    connect( ui.actionLogout, SIGNAL( triggered() ),
             this, SLOT( ResetLogin() ) );

    connect( ui.actionQuit, SIGNAL( triggered() ),
             this, SLOT( close() ) );

    connect( this, SIGNAL( StartUp() ),
             this, SLOT( PostInit() ) );

    connect( this, SIGNAL( FailShutDown( int ) ),
             this, SLOT( ErrorStop( int ) ) );

    connect( ui.actionOnline_Help, SIGNAL( triggered() ),
             this, SLOT( LaunchHelpBrowser() ) );


    connect( ui.actionAbout_Softlinks, SIGNAL( triggered() ),
             this, SLOT( ShowSoftlinksScreen() ) );

    connect( ui.actionAbout_HMS, SIGNAL( triggered() ),
             this, SLOT( ShowAboutScreen() ) );


    connect( views["Login_Ui"], SIGNAL( SuccessfulLogin() ),
             this, SLOT( ShowDefaultScreen() ) );

    connect( views["Login_Ui"], SIGNAL( SuccessfulLogin() ),
             this, SLOT( EnableMenusBySecurity() ) );

    // connect( this, SIGNAL( PrepareInitialSetup() ),
    //          this, SLOT( DatabaseSetup() ) );

    connect( this->menuBar(), SIGNAL( triggered( QAction* ) ),
             this, SLOT( HandleMenuChoice( QAction* ) ) );

}

Main_Window::~Main_Window()
{
    //time to die
    QWidget* temp;
    foreach( QString toSuicide, views.keys() )
    {
        temp = views.take( toSuicide );
        delete temp;
    }

    delete securityMgr;
    //FIXME: investigate this!
    delete dbMgr;
}


bool Main_Window::AddScreenWidget( QString name, QWidget* widget )
{
    if ( views.contains( name ) )
    {
        qDebug() << "ALERT -- Duplicate name:" << name;
        return false;
    }

    views.insert( name, widget );
    ui.viewArea->addWidget( widget );

    return true;
}


void Main_Window::SetSelf( Main_Window* ptr )
{
    Main_Window::self = ptr;
}

Main_Window* Main_Window::MainWin()
{
    if ( not Main_Window::self )
    {
        qDebug( "This is the worst thing that could happen!" );
        exit( 1 );
    }

    return Main_Window::self;
}


Db_Mgr* Main_Window::DBMgr()
{
    return Main_Window::MainWin()->dbMgr;
}


Security_Mgr* Main_Window::Security()
{
    return Main_Window::MainWin()->securityMgr;
}






void Main_Window::PostInit()
{
    Db_Mgr* dbmgr = Main_Window::DBMgr();

    if ( not dbmgr->Ready() )
    {
        QMessageBox::critical( this, "Hotel Management System",
                               "Unable to connect to database.\n"
                               "Please contact your system administrator." );


        emit FailShutDown( 1 );
        return;
    }


    if ( not dbmgr->IsDatabaseSetup() )
    {
        qDebug( "Looks like the db isn't set up yet..." );
        QMessageBox::information( this, "Hotel Management System",
                                  "This is the first time you've run the"
                                  " hotel management sytem.\n"
                                  "Please take a moment to set up the sytem."
                                );


        DatabaseSetup();
    }

    dbmgr->CreateAllTables();
}


void Main_Window::DisableMenus()
{
    //just goes through the list disabling every menu
    // that might be protected by an access level
    ui.menuShuttle->setEnabled( 0 );
    ui.menuGolf->setEnabled( 0 );
    ui.menuHotel_Setup->setEnabled( 0 );
    ui.menuRestaurant->setEnabled( 0 );
    ui.menuHalls->setEnabled( 0 );
    ui.menuTour->setEnabled( 0 );
    ui.menuRoom_Reservation->setEnabled( 0 );
}


void Main_Window::LaunchHelpBrowser()
{
    QString url (SOFTLINKS_URL);

    if ( not BrowserLaunch(url) )
    {
        QMessageBox::warning( this, "Help Browser",
                              "Sorry. Web browser not found." );
    }
}



void Main_Window::ErrorStop( int reason )
{
    qDebug( "[FATAL ERROR]" );
    switch (reason)
    {
        case 1:
            qDebug( "The system failed to connect to the database." );
            qDebug( "DB manager should provide an ErrorMessage function" );
            qDebug( "that would be printed here so the admin can debug" );
            qDebug( "the problem that occured." );
            break;


        default:
            qDebug( "An unexpected error occured." );
    }

    close();
}


void Main_Window::ResetLogin()
{
    qDebug( "Resetting to login view" );
    ChangeCurrentWidget( GetGUIByName("Login_Ui") );
}


void Main_Window::DatabaseSetup()
{
    qDebug( "I want to set up the database." );
    ChangeCurrentWidget( GetGUIByName("Hotel_Info_Ui") );
}


void Main_Window::UnsetPointers()
{
    //loginUi = 0;
    /*
    hotelInfoUi = 0;
    */
}


void Main_Window::ShowDefaultScreen()
{
    qDebug( "Going to show the default screen." );
    ChangeCurrentWidget( GetGUIByName("Default_View_Ui") );
}


void Main_Window::ShowAboutScreen()
{
    ChangeCurrentWidget( GetGUIByName("About_Ui") );
}

void Main_Window::ShowSoftlinksScreen()
{
    ChangeCurrentWidget( GetGUIByName("Softlinks_Ui") );
}


void Main_Window::EnableMenusBySecurity()
{
    Security_Mgr* security = Security();

    qDebug( "Fixing up menus." );
    qDebug() << "Ick." << security->CanReserveRooms();
    ui.menuRoom_Reservation->setEnabled( security->CanReserveRooms() );
    ui.menuShuttle->setEnabled( security->CanReserveShuttle() );
    ui.menuGolf->setEnabled( security->CanReserveGolf() );
    //BUG: this should say CanViewHotel() not CanEditHotel
    ui.menuHotel_Setup->setEnabled( security->CanEditHotel() );
    ui.menuRestaurant->setEnabled( security->CanReserveRestaurant() );
    //BUG: I don't know this one??
    ui.menuHalls->setEnabled( 0 );
    ui.menuTour->setEnabled( security->CanReserveShuttle() );

}
/*
    ui.menuShuttle->setEnabled( 0 );
    ui.menuGolf->setEnabled( 0 );
    ui.menuHotel_Setup->setEnabled( 0 );
    ui.menuRestaurant->setEnabled( 0 );
    ui.menuHalls->setEnabled( 0 );
    ui.menuTour->setEnabled( 0 );
    ui.menuRoom_Reservation->setEnabled( 0 );
*/


void Main_Window::ChangeScreen( QString guiName )
{
    if ( views.contains( guiName ) )
    {
        ChangeCurrentWidget( views[ guiName ] );
    }
}



bool Main_Window::HasGUI( QString guiName )
{
    return views.contains( guiName );
}


QWidget* Main_Window::GetGUIByName( QString guiName )
{
    if ( not views.contains( guiName ) )
    {
        qDebug() << ":-( NOT A KNOWN GUI!" << guiName;
        QMessageBox::critical( this, "System Error - Blame a programmer",
                               QString("Bad gui name: %1").arg(guiName) );
        return 0;
    }

    return views[ guiName ];
}


bool Main_Window::ChangeCurrentWidget( QWidget* widget )
{
    qDebug( "Switching view NOW." );

    //verify widget is valid or bail
    if ( not widget )
    {
        qDebug( "Are you crazy? Widget is NULL!" );
        return false;
    }

    //what were we viewing before?
    QWidget* oldwidget = ui.viewArea->currentWidget();

    emit CloseScreen();

    //FIXME: add a print signal here?????

    disconnect( this, SIGNAL( ShowScreen() ),
                oldwidget, SIGNAL( ShowScreen() ) );

    disconnect( this, SIGNAL( CloseScreen() ),
                oldwidget, SIGNAL( CloseScreen() ) );

    //do the actual switch
    ui.viewArea->setCurrentWidget( widget );


    //unlike above it's nice to know if the supporting modules
    // actually support the Show/Close Screen signals
    // this can also help prevent dumb typos on my part
    int status;

    status = connect( this, SIGNAL( ShowScreen() ),
                      widget, SIGNAL( ShowScreen() ) );

    if ( not status )
        qDebug( "<Main_Window::ChangeCurrentWidget> Failed to connect [1]" );

    status = connect( this, SIGNAL( CloseScreen() ),
                      widget, SIGNAL( CloseScreen() ) );

    if ( not status )
        qDebug( "<Main_Window::ChangeCurrentWidget> Failed to connect [2]" );




    emit ShowScreen();

    return true;
}


void Main_Window::HandleMenuChoice( QAction * action )
{
    //switches don't work on QStrings :-(



    if ( action->text() == "&Add Reservation" )
    {
        ChangeScreen( "Room_Resv_Chooser_Ui" );
        SelectGUI<Room_Resv_Chooser_Ui>("Room_Resv_Chooser_Ui")->ChangeTab(0);

        return;
    }

    if ( action->text() == "&Find Reservation" )
    {
        ChangeScreen( "Room_Resv_Chooser_Ui" );
        SelectGUI<Room_Resv_Chooser_Ui>("Room_Resv_Chooser_Ui")->ChangeTab(1);
        return;
    }

    if ( action->text() == "Check-&In" )
    {
        ChangeScreen( "Room_Resv_Chooser_Ui" );
        SelectGUI<Room_Resv_Chooser_Ui>("Room_Resv_Chooser_Ui")->ChangeTab(2);
        return;
    }

    if ( action->text() == "Check-&Out" )
    {
        ChangeScreen( "Room_Resv_Chooser_Ui" );
        SelectGUI<Room_Resv_Chooser_Ui>("Room_Resv_Chooser_Ui")->ChangeTab(3);
        return;
    }

    //qDebug( "Action not found in HandleMenuChoice" );
}







// EOF: main_window.cpp

