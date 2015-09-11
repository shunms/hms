/*****************************************************************************
 * browserlaunch.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 * 
 *****************************************************************************
 */
 


#include "browserlaunch.h"

#include <QProcess>
#include <QDebug>
#include <QStringList>


#ifdef Q_WS_X11
#define PLATFORM_SUPPORTED

#include "stdlib.h"

bool BrowserLaunch( QString& url )
{
    int status;
    QStringList list;
    //unix systems don't have a "default" browser. Just take a guess
    //do we want to honor an env variable we should probably do it here
    list.append( "konqueror" );
    list.append( "firefox" );
    list.append( "mozilla" );
    list.append( "netscape" );
    
    QString browser;
    foreach( browser, list )
    {
        if ( 0 == QProcess::execute( QString("which %1").arg(browser) ) )
        {
            QString launch ( "%1 %2 &" );
            qDebug() << "Going to start: " << launch;
            //seems like I have to use system here. qt didn't
            //want to actually start something in the background
            status = system( ( launch.arg(browser).arg(url) ).toAscii() );
            
            if ( 0 == status )
            {
                qDebug( "browser started!" );
                return true;
            }
            else
            {
                qDebug( "something failed to start!" );
            }
            
        }
    }
    return false;
        
}

#endif

#ifdef Q_WS_WIN
#define PLATFORM_SUPPORTED

//#warning "(windows) BrowserLaunch Not Yet Tested"
//Fixed by john -- see notes below
#include <windows.h>
#include <shellapi.h>


bool BrowserLaunch( QString& url )
{
    //copy and pasted from: 
    // <http://lists.trolltech.com/qt-interest/2004-04/thread00584-0.html>
    ShellExecuteA( 0, "open", url.toAscii(), 0, 0, SW_SHOWNORMAL );
    //NOTE: Justin Karneges is a smart man. see:
    // <http://lists.trolltech.com/qt-interest/2002-06/thread01073-0.html>
    // for why this wouldn't compile before
    
    //uhmmm MSDN doesn't seem to actually say wtf ShellExecute returns,
    // other than it being a long. That's useful :-(
    return true;
}

#endif


#ifndef PLATFORM_SUPPORTED
#error "Platform Not Supported!"
#endif

// EOF: browserlaunch.cpp

