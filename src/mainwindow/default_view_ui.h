/*****************************************************************************
 * default_view_ui.h - header file
 *
 * Author: John Mulligan <phlogistonjohn@yahoo.com>
 * Team: Softlinks <http://softlinks.nile.homelinux.net:8000>
 *
 * Created: 2006-04-09
 *
 *****************************************************************************
 */



#ifndef DEFAULT_VIEW_UI_H
#define DEFAULT_VIEW_UI_H

#include "ui_default_view.h"

/**
 * Displays generic hotel information as a "home page."
 *
 * This data is created/updated via the hotel management module.
 */
class Default_View_Ui : public QWidget
{
    Q_OBJECT

    public:
        Default_View_Ui( QWidget * parent = 0 );

    private:
        Ui::Default_View_Ui ui;
};


#endif
// EOF: default_view_ui.h

