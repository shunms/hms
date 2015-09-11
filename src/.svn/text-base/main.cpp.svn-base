/*****************************************************************************
 * main.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-08
 *
 *****************************************************************************
 */


#include <QApplication>
#include <QDebug>
#include <QTimer>


#include "src/common/common.h"

#include "src/mainwindow/main_window.h"
#include "src/mainwindow/about_ui.h"


int main( int argc, char* argv[] )
{
    QApplication app( argc, argv );

    qDebug( "Starting up...");


    Main_Window window;


    //We need to trigger an action immediately after the event loop starts
    // this can't just happen before the event loop or the application
    // will never exit if the dbmanager or whatever is not set up correctly.
    //Personally I don't like it very much, but it works
    QTimer::singleShot( 0, &window, SIGNAL( StartUp() ) );


    qDebug() << "Starting HMS dummy chassis v." << About_Ui::HMSVersion();


    window.show();
    return app.exec();
}



// EOF: main.cpp

