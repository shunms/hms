#ifndef UI_SOFTLINKS_H
#define UI_SOFTLINKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Softlinks_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2_2;
    QLabel *label_2;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *Softlinks_Ui)
    {
    Softlinks_Ui->setObjectName(QString::fromUtf8("Softlinks_Ui"));
    Softlinks_Ui->resize(QSize(400, 300).expandedTo(Softlinks_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Softlinks_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(8);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    groupBox = new QGroupBox(Softlinks_Ui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    vboxLayout1 = new QVBoxLayout(groupBox);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(8);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    vboxLayout1->addWidget(label_3);

    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    vboxLayout1->addWidget(label_5);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    vboxLayout1->addWidget(label_4);

    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    vboxLayout1->addWidget(label);

    label_2_2 = new QLabel(groupBox);
    label_2_2->setObjectName(QString::fromUtf8("label_2_2"));

    vboxLayout1->addWidget(label_2_2);

    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    vboxLayout1->addWidget(label_2);


    hboxLayout->addWidget(groupBox);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem2);


    vboxLayout->addLayout(hboxLayout);

    spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem3);

    retranslateUi(Softlinks_Ui);

    QMetaObject::connectSlotsByName(Softlinks_Ui);
    } // setupUi

    void retranslateUi(QWidget *Softlinks_Ui)
    {
    Softlinks_Ui->setWindowTitle(QApplication::translate("Softlinks_Ui", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Softlinks_Ui", "Team Softlinks", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sudha Shunmugam</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Warren Campbell</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Lakshmi Chekuri</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">John Mulligan</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2_2->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Savitha Patil</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Softlinks_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Prasoonadevi Thippana</p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Softlinks_Ui);
    } // retranslateUi

};

namespace Ui {
    class Softlinks_Ui: public Ui_Softlinks_Ui {};
} // namespace Ui

#endif // UI_SOFTLINKS_H
