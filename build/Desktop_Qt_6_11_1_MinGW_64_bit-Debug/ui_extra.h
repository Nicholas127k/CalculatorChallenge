/********************************************************************************
** Form generated from reading UI file 'extra.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRA_H
#define UI_EXTRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_extra
{
public:
    QFrame *frame_extra;
    QPushButton *pushButton_sideBarOpen;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_e;
    QPushButton *pushButton_speedoflight;
    QLabel *label;
    QPushButton *pushButton_change_color;
    QLabel *label_2;
    QFrame *sidebarMenu;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_sideBarClose;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_calculator;
    QPushButton *pushButton_recent;
    QPushButton *pushButton_extra;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *extra)
    {
        if (extra->objectName().isEmpty())
            extra->setObjectName("extra");
        extra->resize(921, 651);
        QFont font;
        font.setPointSize(10);
        extra->setFont(font);
        frame_extra = new QFrame(extra);
        frame_extra->setObjectName("frame_extra");
        frame_extra->setGeometry(QRect(0, 0, 290, 631));
        frame_extra->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        frame_extra->setFrameShape(QFrame::Shape::StyledPanel);
        frame_extra->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_sideBarOpen = new QPushButton(frame_extra);
        pushButton_sideBarOpen->setObjectName("pushButton_sideBarOpen");
        pushButton_sideBarOpen->setGeometry(QRect(0, 0, 70, 49));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_sideBarOpen->sizePolicy().hasHeightForWidth());
        pushButton_sideBarOpen->setSizePolicy(sizePolicy);
        pushButton_sideBarOpen->setMaximumSize(QSize(195, 75));
        pushButton_sideBarOpen->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px;\n"
"color: black;\n"
"    font-weight: bold;"));
        pushButton_sideBarOpen->setCheckable(true);
        horizontalLayoutWidget_2 = new QWidget(frame_extra);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 110, 295, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_pi = new QPushButton(horizontalLayoutWidget_2);
        pushButton_pi->setObjectName("pushButton_pi");
        sizePolicy.setHeightForWidth(pushButton_pi->sizePolicy().hasHeightForWidth());
        pushButton_pi->setSizePolicy(sizePolicy);
        pushButton_pi->setMaximumSize(QSize(10001000, 1000));
        pushButton_pi->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 223, 223);\n"
"color: black; \n"
""));

        horizontalLayout->addWidget(pushButton_pi);

        pushButton_e = new QPushButton(horizontalLayoutWidget_2);
        pushButton_e->setObjectName("pushButton_e");
        sizePolicy.setHeightForWidth(pushButton_e->sizePolicy().hasHeightForWidth());
        pushButton_e->setSizePolicy(sizePolicy);
        pushButton_e->setMaximumSize(QSize(10001000, 1000));
        pushButton_e->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 223, 223);\n"
"color: black; \n"
""));

        horizontalLayout->addWidget(pushButton_e);

        pushButton_speedoflight = new QPushButton(horizontalLayoutWidget_2);
        pushButton_speedoflight->setObjectName("pushButton_speedoflight");
        sizePolicy.setHeightForWidth(pushButton_speedoflight->sizePolicy().hasHeightForWidth());
        pushButton_speedoflight->setSizePolicy(sizePolicy);
        pushButton_speedoflight->setMaximumSize(QSize(10001000, 1000));
        pushButton_speedoflight->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 223, 223);\n"
"color: black; \n"
""));

        horizontalLayout->addWidget(pushButton_speedoflight);

        label = new QLabel(frame_extra);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 70, 111, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;\n"
""));
        pushButton_change_color = new QPushButton(frame_extra);
        pushButton_change_color->setObjectName("pushButton_change_color");
        pushButton_change_color->setGeometry(QRect(40, 550, 201, 59));
        sizePolicy.setHeightForWidth(pushButton_change_color->sizePolicy().hasHeightForWidth());
        pushButton_change_color->setSizePolicy(sizePolicy);
        pushButton_change_color->setMaximumSize(QSize(1000, 1000));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setUnderline(false);
        pushButton_change_color->setFont(font1);
        pushButton_change_color->setStyleSheet(QString::fromUtf8("background-color: #2a5298;\n"
"font-size: 8;\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 10px;"));
        label_2 = new QLabel(frame_extra);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 330, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;"));
        sidebarMenu = new QFrame(frame_extra);
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
        pushButton_sideBarClose = new QPushButton(horizontalLayoutWidget);
        pushButton_sideBarClose->setObjectName("pushButton_sideBarClose");
        sizePolicy.setHeightForWidth(pushButton_sideBarClose->sizePolicy().hasHeightForWidth());
        pushButton_sideBarClose->setSizePolicy(sizePolicy);
        pushButton_sideBarClose->setMaximumSize(QSize(195, 75));
        pushButton_sideBarClose->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px;\n"
"color: black;\n"
"font-weight: bold;"));
        pushButton_sideBarClose->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_sideBarClose);

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


        retranslateUi(extra);

        QMetaObject::connectSlotsByName(extra);
    } // setupUi

    void retranslateUi(QWidget *extra)
    {
        extra->setWindowTitle(QCoreApplication::translate("extra", "Form", nullptr));
        pushButton_sideBarOpen->setText(QCoreApplication::translate("extra", "\342\211\241      ", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("extra", "\317\200", nullptr));
        pushButton_e->setText(QCoreApplication::translate("extra", "e", nullptr));
        pushButton_speedoflight->setText(QCoreApplication::translate("extra", "c", nullptr));
        label->setText(QCoreApplication::translate("extra", "Scientific Values", nullptr));
        pushButton_change_color->setText(QCoreApplication::translate("extra", "Change Backround Color", nullptr));
        label_2->setText(QCoreApplication::translate("extra", "Extra", nullptr));
        pushButton_sideBarClose->setText(QCoreApplication::translate("extra", "\342\211\241      ", nullptr));
        pushButton_calculator->setText(QCoreApplication::translate("extra", "Calculator", nullptr));
        pushButton_recent->setText(QCoreApplication::translate("extra", "Recent", nullptr));
        pushButton_extra->setText(QCoreApplication::translate("extra", "Extra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extra: public Ui_extra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRA_H
