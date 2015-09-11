#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Main_Window
{
public:
    QAction *actionPrint;
    QAction *actionQuit;
    QAction *actionLogout;
    QAction *actionAddRoomReservation;
    QAction *actionFindRoomReservation;
    QAction *actionCheckIn;
    QAction *actionCheckOut;
    QAction *actionNewRestReservation;
    QAction *actionFindTableReservation;
    QAction *actionViewWaitingList;
    QAction *actionNew_Tour;
    QAction *actionAdd_Tour;
    QAction *actionModify_Tour;
    QAction *actionAbout_HMS;
    QAction *actionAbout_Softlinks;
    QAction *actionOnline_Help;
    QAction *action_Manage_Hotel;
    QAction *action_Configure_Security;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QStackedWidget *viewArea;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menuHalls;
    QMenu *menuTour;
    QMenu *menuShuttle;
    QMenu *menuHotel_Setup;
    QMenu *menuHelp;
    QMenu *menuGolf;
    QMenu *menuRestaurant;
    QMenu *menuRoom_Reservation;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_Window)
    {
    Main_Window->setObjectName(QString::fromUtf8("Main_Window"));
    Main_Window->resize(QSize(800, 600).expandedTo(Main_Window->minimumSizeHint()));
    actionPrint = new QAction(Main_Window);
    actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
    actionQuit = new QAction(Main_Window);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    actionLogout = new QAction(Main_Window);
    actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
    actionAddRoomReservation = new QAction(Main_Window);
    actionAddRoomReservation->setObjectName(QString::fromUtf8("actionAddRoomReservation"));
    actionFindRoomReservation = new QAction(Main_Window);
    actionFindRoomReservation->setObjectName(QString::fromUtf8("actionFindRoomReservation"));
    actionCheckIn = new QAction(Main_Window);
    actionCheckIn->setObjectName(QString::fromUtf8("actionCheckIn"));
    actionCheckOut = new QAction(Main_Window);
    actionCheckOut->setObjectName(QString::fromUtf8("actionCheckOut"));
    actionNewRestReservation = new QAction(Main_Window);
    actionNewRestReservation->setObjectName(QString::fromUtf8("actionNewRestReservation"));
    actionFindTableReservation = new QAction(Main_Window);
    actionFindTableReservation->setObjectName(QString::fromUtf8("actionFindTableReservation"));
    actionViewWaitingList = new QAction(Main_Window);
    actionViewWaitingList->setObjectName(QString::fromUtf8("actionViewWaitingList"));
    actionNew_Tour = new QAction(Main_Window);
    actionNew_Tour->setObjectName(QString::fromUtf8("actionNew_Tour"));
    actionAdd_Tour = new QAction(Main_Window);
    actionAdd_Tour->setObjectName(QString::fromUtf8("actionAdd_Tour"));
    actionModify_Tour = new QAction(Main_Window);
    actionModify_Tour->setObjectName(QString::fromUtf8("actionModify_Tour"));
    actionAbout_HMS = new QAction(Main_Window);
    actionAbout_HMS->setObjectName(QString::fromUtf8("actionAbout_HMS"));
    actionAbout_Softlinks = new QAction(Main_Window);
    actionAbout_Softlinks->setObjectName(QString::fromUtf8("actionAbout_Softlinks"));
    actionOnline_Help = new QAction(Main_Window);
    actionOnline_Help->setObjectName(QString::fromUtf8("actionOnline_Help"));
    action_Manage_Hotel = new QAction(Main_Window);
    action_Manage_Hotel->setObjectName(QString::fromUtf8("action_Manage_Hotel"));
    action_Configure_Security = new QAction(Main_Window);
    action_Configure_Security->setObjectName(QString::fromUtf8("action_Configure_Security"));
    centralwidget = new QWidget(Main_Window);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    vboxLayout = new QVBoxLayout(centralwidget);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    viewArea = new QStackedWidget(centralwidget);
    viewArea->setObjectName(QString::fromUtf8("viewArea"));
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    viewArea->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    viewArea->addWidget(page_2);

    vboxLayout->addWidget(viewArea);

    Main_Window->setCentralWidget(centralwidget);
    menubar = new QMenuBar(Main_Window);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 800, 32));
    menuHalls = new QMenu(menubar);
    menuHalls->setObjectName(QString::fromUtf8("menuHalls"));
    menuTour = new QMenu(menubar);
    menuTour->setObjectName(QString::fromUtf8("menuTour"));
    menuShuttle = new QMenu(menubar);
    menuShuttle->setObjectName(QString::fromUtf8("menuShuttle"));
    menuHotel_Setup = new QMenu(menubar);
    menuHotel_Setup->setObjectName(QString::fromUtf8("menuHotel_Setup"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    menuGolf = new QMenu(menubar);
    menuGolf->setObjectName(QString::fromUtf8("menuGolf"));
    menuRestaurant = new QMenu(menubar);
    menuRestaurant->setObjectName(QString::fromUtf8("menuRestaurant"));
    menuRoom_Reservation = new QMenu(menubar);
    menuRoom_Reservation->setObjectName(QString::fromUtf8("menuRoom_Reservation"));
    menu_File = new QMenu(menubar);
    menu_File->setObjectName(QString::fromUtf8("menu_File"));
    Main_Window->setMenuBar(menubar);
    statusbar = new QStatusBar(Main_Window);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 575, 800, 25));
    Main_Window->setStatusBar(statusbar);

    menubar->addAction(menu_File->menuAction());
    menubar->addAction(menuRoom_Reservation->menuAction());
    menubar->addAction(menuRestaurant->menuAction());
    menubar->addAction(menuHalls->menuAction());
    menubar->addAction(menuTour->menuAction());
    menubar->addAction(menuShuttle->menuAction());
    menubar->addAction(menuGolf->menuAction());
    menubar->addAction(menuHotel_Setup->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuTour->addAction(actionNew_Tour);
    menuTour->addAction(actionAdd_Tour);
    menuTour->addAction(actionModify_Tour);
    menuHotel_Setup->addAction(action_Manage_Hotel);
    menuHotel_Setup->addAction(action_Configure_Security);
    menuHelp->addAction(actionAbout_HMS);
    menuHelp->addAction(actionAbout_Softlinks);
    menuHelp->addAction(actionOnline_Help);
    menuRestaurant->addAction(actionNewRestReservation);
    menuRestaurant->addAction(actionFindTableReservation);
    menuRestaurant->addAction(actionViewWaitingList);
    menuRoom_Reservation->addAction(actionAddRoomReservation);
    menuRoom_Reservation->addAction(actionFindRoomReservation);
    menuRoom_Reservation->addAction(actionCheckIn);
    menuRoom_Reservation->addAction(actionCheckOut);
    menu_File->addAction(actionPrint);
    menu_File->addSeparator();
    menu_File->addAction(actionLogout);
    menu_File->addAction(actionQuit);
    retranslateUi(Main_Window);

    QMetaObject::connectSlotsByName(Main_Window);
    } // setupUi

    void retranslateUi(QMainWindow *Main_Window)
    {
    Main_Window->setWindowTitle(QApplication::translate("Main_Window", "MainWindow", 0, QApplication::UnicodeUTF8));
    actionPrint->setText(QApplication::translate("Main_Window", "&Print", 0, QApplication::UnicodeUTF8));
    actionQuit->setText(QApplication::translate("Main_Window", "&Quit", 0, QApplication::UnicodeUTF8));
    actionLogout->setText(QApplication::translate("Main_Window", "Lo&gout", 0, QApplication::UnicodeUTF8));
    actionAddRoomReservation->setText(QApplication::translate("Main_Window", "&Add Reservation", 0, QApplication::UnicodeUTF8));
    actionFindRoomReservation->setText(QApplication::translate("Main_Window", "&Find Reservation", 0, QApplication::UnicodeUTF8));
    actionCheckIn->setText(QApplication::translate("Main_Window", "Check-&In", 0, QApplication::UnicodeUTF8));
    actionCheckOut->setText(QApplication::translate("Main_Window", "Check-&Out", 0, QApplication::UnicodeUTF8));
    actionNewRestReservation->setText(QApplication::translate("Main_Window", "New Table Reservation", 0, QApplication::UnicodeUTF8));
    actionFindTableReservation->setText(QApplication::translate("Main_Window", "Find Reservation", 0, QApplication::UnicodeUTF8));
    actionViewWaitingList->setText(QApplication::translate("Main_Window", "View Waiting List", 0, QApplication::UnicodeUTF8));
    actionNew_Tour->setText(QApplication::translate("Main_Window", "Add Tour", 0, QApplication::UnicodeUTF8));
    actionAdd_Tour->setText(QApplication::translate("Main_Window", "Add Tour", 0, QApplication::UnicodeUTF8));
    actionModify_Tour->setText(QApplication::translate("Main_Window", "Modify Tour", 0, QApplication::UnicodeUTF8));
    actionAbout_HMS->setText(QApplication::translate("Main_Window", "About &HMS", 0, QApplication::UnicodeUTF8));
    actionAbout_Softlinks->setText(QApplication::translate("Main_Window", "About &Softlinks", 0, QApplication::UnicodeUTF8));
    actionOnline_Help->setText(QApplication::translate("Main_Window", "&Online Help", 0, QApplication::UnicodeUTF8));
    action_Manage_Hotel->setText(QApplication::translate("Main_Window", "&Manage Hotel", 0, QApplication::UnicodeUTF8));
    action_Configure_Security->setText(QApplication::translate("Main_Window", "&Configure Security", 0, QApplication::UnicodeUTF8));
    menuHalls->setTitle(QApplication::translate("Main_Window", "&Halls", 0, QApplication::UnicodeUTF8));
    menuTour->setTitle(QApplication::translate("Main_Window", "Tour", 0, QApplication::UnicodeUTF8));
    menuShuttle->setTitle(QApplication::translate("Main_Window", "&Shuttle", 0, QApplication::UnicodeUTF8));
    menuHotel_Setup->setTitle(QApplication::translate("Main_Window", "Hotel S&etup", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("Main_Window", "Hel&p", 0, QApplication::UnicodeUTF8));
    menuGolf->setTitle(QApplication::translate("Main_Window", "&Golf", 0, QApplication::UnicodeUTF8));
    menuRestaurant->setTitle(QApplication::translate("Main_Window", "Rest&aurant", 0, QApplication::UnicodeUTF8));
    menuRoom_Reservation->setTitle(QApplication::translate("Main_Window", "&Room Reservation", 0, QApplication::UnicodeUTF8));
    menu_File->setTitle(QApplication::translate("Main_Window", "&File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Main_Window: public Ui_Main_Window {};
} // namespace Ui

#endif // UI_MAIN_WINDOW_H
