/********************************************************************************
** Form generated from reading UI file 'recentcal.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTCAL_H
#define UI_RECENTCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recentcal
{
public:
    QFrame *frame_recent;
    QPushButton *pushButton_menu_3;
    QListWidget *listWidget;
    QPushButton *pushButton_clearall;
    QFrame *sidebarMenu;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_menu_2;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_calculator;
    QPushButton *pushButton_recent;
    QPushButton *pushButton_extra;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *recentcal)
    {
        if (recentcal->objectName().isEmpty())
            recentcal->setObjectName("recentcal");
        recentcal->resize(1027, 666);
        frame_recent = new QFrame(recentcal);
        frame_recent->setObjectName("frame_recent");
        frame_recent->setGeometry(QRect(0, 0, 290, 631));
        frame_recent->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        frame_recent->setFrameShape(QFrame::Shape::StyledPanel);
        frame_recent->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_menu_3 = new QPushButton(frame_recent);
        pushButton_menu_3->setObjectName("pushButton_menu_3");
        pushButton_menu_3->setGeometry(QRect(0, 0, 70, 49));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_menu_3->sizePolicy().hasHeightForWidth());
        pushButton_menu_3->setSizePolicy(sizePolicy);
        pushButton_menu_3->setMaximumSize(QSize(195, 75));
        pushButton_menu_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
"    font-weight: bold;\n"
"color: black;\n"
""));
        pushButton_menu_3->setCheckable(true);
        listWidget = new QListWidget(frame_recent);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 50, 291, 581));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget#listWidget {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    outline: none;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    background-color: white;\n"
"    color: black;\n"
"    font-size: 20pt;\n"
"    font-family: \"Segoe UI\";\n"
"    padding: 6px;\n"
"    margin: 6px;\n"
"    border-radius: 10px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: rgb(239, 239, 239);\n"
"}\n"
""));
        pushButton_clearall = new QPushButton(frame_recent);
        pushButton_clearall->setObjectName("pushButton_clearall");
        pushButton_clearall->setGeometry(QRect(50, 550, 191, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_clearall->sizePolicy().hasHeightForWidth());
        pushButton_clearall->setSizePolicy(sizePolicy1);
        pushButton_clearall->setMinimumSize(QSize(0, 50));
        pushButton_clearall->setMaximumSize(QSize(201, 16777215));
        pushButton_clearall->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1e3c72, stop:1 #2a5298);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 10px;"));
        sidebarMenu = new QFrame(frame_recent);
        sidebarMenu->setObjectName("sidebarMenu");
        sidebarMenu->setGeometry(QRect(0, 0, 191, 631));
        sidebarMenu->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: white;\n"
"    border-right: 1px solid #E0E0E0;\n"
"\n"
"\n"
"}"));
        sidebarMenu->setFrameShape(QFrame::Shape::StyledPanel);
        sidebarMenu->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayoutWidget = new QWidget(sidebarMenu);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 272, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_menu_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_menu_2->setObjectName("pushButton_menu_2");
        sizePolicy.setHeightForWidth(pushButton_menu_2->sizePolicy().hasHeightForWidth());
        pushButton_menu_2->setSizePolicy(sizePolicy);
        pushButton_menu_2->setMaximumSize(QSize(195, 75));
        pushButton_menu_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px;\n"
"color: black;\n"
"\n"
"    font-weight: bold;"));
        pushButton_menu_2->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_menu_2);

        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(200, 0));
        frame->setMaximumSize(QSize(16777215, 75));
        frame->setStyleSheet(QString::fromUtf8("border: none;\n"
"       background-color: transparent;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_3->addWidget(frame);

        verticalLayoutWidget = new QWidget(sidebarMenu);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 50, 191, 371));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_calculator = new QPushButton(verticalLayoutWidget);
        pushButton_calculator->setObjectName("pushButton_calculator");
        pushButton_calculator->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_3->addWidget(pushButton_calculator);

        pushButton_recent = new QPushButton(verticalLayoutWidget);
        pushButton_recent->setObjectName("pushButton_recent");
        pushButton_recent->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_3->addWidget(pushButton_recent);

        pushButton_extra = new QPushButton(verticalLayoutWidget);
        pushButton_extra->setObjectName("pushButton_extra");
        pushButton_extra->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_3->addWidget(pushButton_extra);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(recentcal);

        QMetaObject::connectSlotsByName(recentcal);
    } // setupUi

    void retranslateUi(QWidget *recentcal)
    {
        recentcal->setWindowTitle(QCoreApplication::translate("recentcal", "Form", nullptr));
        pushButton_menu_3->setText(QCoreApplication::translate("recentcal", "\342\211\241      ", nullptr));
        pushButton_clearall->setText(QCoreApplication::translate("recentcal", "Clear All", nullptr));
        pushButton_menu_2->setText(QCoreApplication::translate("recentcal", "\342\211\241      ", nullptr));
        pushButton_calculator->setText(QCoreApplication::translate("recentcal", "Calculator", nullptr));
        pushButton_recent->setText(QCoreApplication::translate("recentcal", "Recent", nullptr));
        pushButton_extra->setText(QCoreApplication::translate("recentcal", "Extra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentcal: public Ui_recentcal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTCAL_H
