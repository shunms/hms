#ifndef UI_TOUR_INFORMATION_H
#define UI_TOUR_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

class Ui_tour_info
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *pbTourAdd;
    QPushButton *pbTourSave;
    QPushButton *pbTourDelete;
    QPushButton *pbTourCancel;
    QGroupBox *gbTourinfo;
    QTableWidget *tblTourInfo;

    void setupUi(QWidget *tour_info)
    {
    tour_info->setObjectName(QString::fromUtf8("tour_info"));
    tour_info->resize(QSize(687, 345).expandedTo(tour_info->minimumSizeHint()));
    layoutWidget = new QWidget(tour_info);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(310, 270, 320, 25));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbTourAdd = new QPushButton(layoutWidget);
    pbTourAdd->setObjectName(QString::fromUtf8("pbTourAdd"));

    hboxLayout->addWidget(pbTourAdd);

    pbTourSave = new QPushButton(layoutWidget);
    pbTourSave->setObjectName(QString::fromUtf8("pbTourSave"));

    hboxLayout->addWidget(pbTourSave);

    pbTourDelete = new QPushButton(layoutWidget);
    pbTourDelete->setObjectName(QString::fromUtf8("pbTourDelete"));

    hboxLayout->addWidget(pbTourDelete);

    pbTourCancel = new QPushButton(layoutWidget);
    pbTourCancel->setObjectName(QString::fromUtf8("pbTourCancel"));

    hboxLayout->addWidget(pbTourCancel);

    gbTourinfo = new QGroupBox(tour_info);
    gbTourinfo->setObjectName(QString::fromUtf8("gbTourinfo"));
    gbTourinfo->setGeometry(QRect(10, 60, 661, 191));
    tblTourInfo = new QTableWidget(gbTourinfo);
    tblTourInfo->setObjectName(QString::fromUtf8("tblTourInfo"));
    tblTourInfo->setGeometry(QRect(10, 30, 641, 141));
    retranslateUi(tour_info);
    QObject::connect(pbTourCancel, SIGNAL(clicked()), tour_info, SLOT(close()));

    QMetaObject::connectSlotsByName(tour_info);
    } // setupUi

    void retranslateUi(QWidget *tour_info)
    {
    tour_info->setWindowTitle(QApplication::translate("tour_info", "tourinfo", 0, QApplication::UnicodeUTF8));
    pbTourAdd->setText(QApplication::translate("tour_info", "Add", 0, QApplication::UnicodeUTF8));
    pbTourSave->setText(QApplication::translate("tour_info", "Save", 0, QApplication::UnicodeUTF8));
    pbTourDelete->setText(QApplication::translate("tour_info", "Delete", 0, QApplication::UnicodeUTF8));
    pbTourCancel->setText(QApplication::translate("tour_info", "Cancel", 0, QApplication::UnicodeUTF8));
    gbTourinfo->setTitle(QApplication::translate("tour_info", "Tour Information", 0, QApplication::UnicodeUTF8));
    tblTourInfo->clear();
    tblTourInfo->setColumnCount(7);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("tour_info", "Tour", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("tour_info", "Date", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("tour_info", "StartTime", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("tour_info", "ArrivalTime", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("tour_info", "Total Capacity", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(4, __colItem4);

    QTableWidgetItem *__colItem5 = new QTableWidgetItem();
    __colItem5->setText(QApplication::translate("tour_info", "Cost", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(5, __colItem5);

    QTableWidgetItem *__colItem6 = new QTableWidgetItem();
    __colItem6->setText(QApplication::translate("tour_info", "Tour details", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setHorizontalHeaderItem(6, __colItem6);
    tblTourInfo->setRowCount(3);

    QTableWidgetItem *__rowItem = new QTableWidgetItem();
    __rowItem->setText(QApplication::translate("tour_info", "1", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setVerticalHeaderItem(0, __rowItem);

    QTableWidgetItem *__rowItem1 = new QTableWidgetItem();
    __rowItem1->setText(QApplication::translate("tour_info", "2", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setVerticalHeaderItem(1, __rowItem1);

    QTableWidgetItem *__rowItem2 = new QTableWidgetItem();
    __rowItem2->setText(QApplication::translate("tour_info", "3", 0, QApplication::UnicodeUTF8));
    tblTourInfo->setVerticalHeaderItem(2, __rowItem2);
    Q_UNUSED(tour_info);
    } // retranslateUi

};

namespace Ui {
    class tour_info: public Ui_tour_info {};
} // namespace Ui

#endif // UI_TOUR_INFORMATION_H
