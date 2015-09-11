#ifndef UI_DEFAULT_VIEW_H
#define UI_DEFAULT_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_Default_View_Ui
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *image;
    QSpacerItem *spacerItem;
    QLabel *hotelName;
    QLabel *hotelMgmt;
    QTextEdit *hotelDesc;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_4;

    void setupUi(QWidget *Default_View_Ui)
    {
    Default_View_Ui->setObjectName(QString::fromUtf8("Default_View_Ui"));
    Default_View_Ui->resize(QSize(661, 594).expandedTo(Default_View_Ui->minimumSizeHint()));
    vboxLayout = new QVBoxLayout(Default_View_Ui);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(8);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    image = new QLabel(Default_View_Ui);
    image->setObjectName(QString::fromUtf8("image"));
    image->setFrameShape(QFrame::Box);
    image->setFrameShadow(QFrame::Sunken);
    image->setPixmap(QPixmap());

    hboxLayout->addWidget(image);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    vboxLayout->addLayout(hboxLayout);

    hotelName = new QLabel(Default_View_Ui);
    hotelName->setObjectName(QString::fromUtf8("hotelName"));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(24);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    hotelName->setFont(font);

    vboxLayout->addWidget(hotelName);

    hotelMgmt = new QLabel(Default_View_Ui);
    hotelMgmt->setObjectName(QString::fromUtf8("hotelMgmt"));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Sans Serif"));
    font1.setPointSize(14);
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(false);
    font1.setWeight(50);
    font1.setStrikeOut(false);
    hotelMgmt->setFont(font1);

    vboxLayout->addWidget(hotelMgmt);

    hotelDesc = new QTextEdit(Default_View_Ui);
    hotelDesc->setObjectName(QString::fromUtf8("hotelDesc"));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Bitstream Vera Serif"));
    font2.setPointSize(8);
    font2.setBold(false);
    font2.setItalic(false);
    font2.setUnderline(false);
    font2.setWeight(50);
    font2.setStrikeOut(false);
    hotelDesc->setFont(font2);
    hotelDesc->setFrameShape(QFrame::Box);
    hotelDesc->setFrameShadow(QFrame::Sunken);
    hotelDesc->setReadOnly(true);

    vboxLayout->addWidget(hotelDesc);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);

    label_4 = new QLabel(Default_View_Ui);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    hboxLayout1->addWidget(label_4);


    vboxLayout->addLayout(hboxLayout1);

    retranslateUi(Default_View_Ui);

    QMetaObject::connectSlotsByName(Default_View_Ui);
    } // setupUi

    void retranslateUi(QWidget *Default_View_Ui)
    {
    Default_View_Ui->setWindowTitle(QApplication::translate("Default_View_Ui", "Form", 0, QApplication::UnicodeUTF8));
    image->setText(QApplication::translate("Default_View_Ui", "<AN IMAGE GOES HERE>", 0, QApplication::UnicodeUTF8));
    hotelName->setText(QApplication::translate("Default_View_Ui", "Le Hotel Liens Doux", 0, QApplication::UnicodeUTF8));
    hotelMgmt->setText(QApplication::translate("Default_View_Ui", "Softlinks Management Co.", 0, QApplication::UnicodeUTF8));
    hotelDesc->setHtml(QApplication::translate("Default_View_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Bitstream Vera Serif; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:MS Shell Dlg; font-size:12pt; font-style:italic;\">Le Hotel Liens Doux</span><span style=\" font-family:MS Shell Dlg; font-size:12pt;\">, french for The Softlinks hotel, sits in a picturesque glen just south of the town of Devnull. With twenty-five rooms overlooking the sparkling Iostream river, and ten rooms with a view of the immaculately groomed grounds, Liens Doux provides a view for every guest.</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:MS Shell Dlg; font-size:12pt;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:MS Shell Dlg; font-size:12pt;\">Only minutes away from the bustling new technology park, and a short drive away from our region's wine country, we offer the perfect blend of modernity and old world charm.</p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:MS Shell Dlg; font-size:12pt;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:MS Shell Dlg; font-size:12pt;\"><span style=\" font-style:italic;\">Le Hotel Liens Doux</span>, offers its guest such ammenities as high-speed internet access in every room, access to a wide variety of movies and television programs on-demand, access to our swimming pool, and a complimentary continental breakfast.</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Default_View_Ui", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Software Provided by Softlinks Inc. <span style=\" font-weight:600;\">The </span>choice in hospitality systems.</p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Default_View_Ui);
    } // retranslateUi

};

namespace Ui {
    class Default_View_Ui: public Ui_Default_View_Ui {};
} // namespace Ui

#endif // UI_DEFAULT_VIEW_H
