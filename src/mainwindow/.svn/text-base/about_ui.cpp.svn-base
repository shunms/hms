/*****************************************************************************
 * about_ui.cpp - source file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 *
 *****************************************************************************
 */



#include "about_ui.h"

#include "src/common/version.h"

#include <QDebug>

About_Ui::About_Ui( QWidget * parent ) : QWidget( parent )
{
    ui.setupUi( this );

    ui.aboutVersion->setText( QString("Version: %1").arg( HMSVersion() ) );

    connect( this, SIGNAL( CloseScreen() ),
             this, SLOT( ScreenClosed() ) );

    connect( this, SIGNAL( ShowScreen() ),
             this, SLOT( ScreenShown() ) );
}


QString About_Ui::HMSVersion()
{

    QString revision ( REV );

    revision = revision.split(':')[ 1 ];
    revision.chop(1);
    revision = revision.trimmed();
    revision = QString( "%1.%2.%3" ).arg( MAJOR ).arg( MINOR ).arg( revision );

    return revision;
}


void About_Ui::ScreenClosed()
{
    qDebug( "<About_Ui> See ya later.");
}

void About_Ui::ScreenShown()
{
    qDebug( "<About_Ui> Good morning." );
}


// EOF: about_ui.cpp

