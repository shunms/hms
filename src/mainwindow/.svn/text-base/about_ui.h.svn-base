/*****************************************************************************
 * about_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 *
 *****************************************************************************
 */



#ifndef ABOUT_UI_H
#define ABOUT_UI_H

#include <QString>
#include "ui_about.h"


/**
 * A simple GUI that displays the HMS's name and version.
 *
 */
class About_Ui : public QWidget
{
    Q_OBJECT

    public:
        About_Ui( QWidget * parent = 0 );

        /**
         * This static function relies on the version.h header file
         * to build a string of the program's version.
         */
        static QString HMSVersion();

    public slots:
        /**
         * Testing function.
         */
        void ScreenShown();

        /**
         * Testing function.
         */
        void ScreenClosed();

    signals:
        /**
         * See Main_Window::ShowScreen()
         */
        void ShowScreen();

        /**
         * See Main_Window::CloseScreen()
         */
        void CloseScreen();


    private:
        Ui::About_Ui ui;
};



#endif
// EOF: about_ui.h

