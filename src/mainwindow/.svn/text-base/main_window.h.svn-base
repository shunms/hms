/*****************************************************************************
 * main_window.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-08
 *
 *****************************************************************************
 */



#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QAction>

#include "src/common/common.h"

//viewables
#include "login_ui.h"
#include "about_ui.h"
#include "softlinks_ui.h"

#include "default_view_ui.h"



//current window ui
#include "ui_main_window.h"

#include "src/dbmgr/db_mgr.h"

#include "src/mainwindow/stub_security.h"


/**
 * Main_Window is the class that regulates all the other objects in
 * the system.
 *
 * Main_Window should be considered something of a singleton, there
 * should only be one of them in the system at any time, any it should
 * be globally simple to get access to the object w/o tracking it constantly.
 *
 * Three functions implement this behavior: MainWin(), DBMgr(), and Security().
 * They are static member functions that always return the pointer to the
 * Main_Window instance, a pointer to the Db_Mgr object and the Secuity_Mgr
 * object respectivly.
 *
 * The other purpose of the class is to hold the rest of the GUI screens
 * together. Main_Window acts as a switching station that shows the appropriate
 * screen when needed. To do this two signals are used: ShowScreen() and
 * CloseScreen() these signals are sent to the same named signals of each
 * gui class when it is brought into view and hidden.
 *
 * To tell Main_Window to switch to a different screen use the ChangeScreen()
 * slot. If you want to access a partner widget use the the GetGUIByName()
 * member function.
 */
class Main_Window : public QMainWindow
{
    Q_OBJECT

    public:
        /**
         * Default constructor.
         */
        Main_Window( QWidget* parent = 0, Qt::WFlags flags = 0 );

        /**
         * Default destructor
         */
        ~Main_Window();



    public:
        //public static member functions

        /**
         * Singleton-esque function used to get a pointer to the only
         * live Main_Window object in the system.
         */
        static Main_Window* MainWin();

        /**
         * Returns a pointer to the security subsystem.
         */
        static Security_Mgr* Security();

        /**
         * Returns a pointer to the db manager.
         */
        static Db_Mgr* DBMgr();

    private:
        /**
         * Sets the self pointer to point at the main window.
         */
        static void SetSelf( Main_Window* ptr );

    public slots:

        /**
         * Operations that need to be executed after the system enters
         * the main event loop.
         */
        void PostInit();

        /**
         * Logs user out. Clears login information.
         */
        void ResetLogin();

        /**
         * If the software has not been run yet, this slot helps
         * set things up first.
         */
        void DatabaseSetup();

        /**
         * Forces all menus to gray out.
         */
        void DisableMenus();

        /**
         * Quit on a major error.
         */
        void ErrorStop( int reason );

        /**
         * Launches an external web browser.
         *
         * The browser will open at a url that is currently hardcoded
         * into the system. The user would read this page as online
         * user level documentation.
         */
        void LaunchHelpBrowser();

        /**
         * Shows the default general hotel info screen.
         */
        void ShowDefaultScreen();

        /**
         * Enables the top level menus.
         *
         * Only the menus that the user has permission to access will be
         * enabled.
         */
        void EnableMenusBySecurity();

        /**
         * Shows the softlinks team screen.
         */
        void ShowSoftlinksScreen();

        /**
         * Shows the HMS about screen.
         */
        void ShowAboutScreen();

        /**
         * Tells the main window to switch to the named screen.
         *
         * The guiName must match the name of the class being
         * used. The previous screen will be sent the CloseScreen() signal
         * and the new one will be sent the ShowScreen() signal.
         */
        void ChangeScreen( QString guiName );

    public:
        /**
         * Returns a screen based on a string name.
         *
         * The guiName must match the name of the class being
         * used. If not, the function will return a NULL pointer.
         */
        QWidget* GetGUIByName( QString guiName );

        /**
         * Returns true if the main window contains a gui with
         * the given name.
         *
         */
        bool HasGUI( QString guiName );

        /**
         * A type converting version of the GetGUIByName() function.
         *
         * The function will return the gui converted to a pointer to type
         * T. I got really sick of typing static cast applied to
         * GetGUIByName() and so I rolled all into one function.
         */
        template <class T>
                T* SelectGUI( QString guiName );


    signals:
        /**
         * Triggered when the system first starts.
         */
        void StartUp();

        /**
         * Triggered when the basic initing is done.
         */
        void SetupComplete();

        /**
         * Triggered when someing BAD happens.
         */
        void FailShutDown( int reason );

        /**
         * Trigged when a new gui screen appears.
         */
        void ShowScreen();

        /**
         * Triggered when a gui screen is no longer being viewed.
         */
        void CloseScreen();

    private slots:

        void HandleMenuChoice( QAction* action );


    private:
        /**
         * Clears a bunch of pointers
         */
        void UnsetPointers();

        /**
         * Swaps the currently active widget as appropriate
         * sending the right signals.
         */
        bool ChangeCurrentWidget( QWidget* widget );

        /**
         * Adds a new screen to the main view switcher.
         */
        bool AddScreenWidget( QString name, QWidget* widget );


    private:
        QMap<QString,GUI_Ptr> views;


        Ui::Main_Window ui;


        //FIXME: Remove permanently
        //Login_Ui* loginUi;

        Default_View_Ui* defaultUi;

        //Hotel_Info_Ui* hotelInfoUi;

        About_Ui* aboutUi;
        Softlinks_Ui* softlinksUi;

        //FIXME: Remove permanently?
        //int loginUiPos;

        //sudha wanted main window to manage these
        static Main_Window* self;
        Security_Mgr* securityMgr;
        Db_Mgr* dbMgr;


};


template <class T>
        T* Main_Window::SelectGUI( QString guiName )
{
    return static_cast<T*>( GetGUIByName(guiName) );
}

#endif
// EOF: main_window.h

