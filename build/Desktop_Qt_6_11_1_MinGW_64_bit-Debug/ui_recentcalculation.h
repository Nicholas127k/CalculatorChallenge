/********************************************************************************
** Form generated from reading UI file 'recentcalculation.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTCALCULATION_H
#define UI_RECENTCALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recentcalculation
{
public:
    QFrame *sidebarMenu;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_menu_4;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_calculator_2;
    QPushButton *pushButton_recent_2;
    QPushButton *pushButton_favorite_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_3;
    QPushButton *pushButton_menu_5;
    QListView *listView_2;

    void setupUi(QDialog *recentcalculation)
    {
        if (recentcalculation->objectName().isEmpty())
            recentcalculation->setObjectName("recentcalculation");
        recentcalculation->resize(1120, 599);
        sidebarMenu = new QFrame(recentcalculation);
        sidebarMenu->setObjectName("sidebarMenu");
        sidebarMenu->setGeometry(QRect(730, 40, 191, 631));
        sidebarMenu->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: white;\n"
"    border-right: 1px solid #E0E0E0;\n"
"\n"
"\n"
"}"));
        sidebarMenu->setFrameShape(QFrame::Shape::StyledPanel);
        sidebarMenu->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayoutWidget_2 = new QWidget(sidebarMenu);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 272, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_menu_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_menu_4->setObjectName("pushButton_menu_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_menu_4->sizePolicy().hasHeightForWidth());
        pushButton_menu_4->setSizePolicy(sizePolicy);
        pushButton_menu_4->setMaximumSize(QSize(195, 75));
        pushButton_menu_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
"    font-weight: bold;"));
        pushButton_menu_4->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_menu_4);

        frame_2 = new QFrame(horizontalLayoutWidget_2);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setMaximumSize(QSize(16777215, 75));
        frame_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"       background-color: transparent;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_4->addWidget(frame_2);

        verticalLayoutWidget_2 = new QWidget(sidebarMenu);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 50, 191, 371));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_calculator_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_calculator_2->setObjectName("pushButton_calculator_2");

        verticalLayout_4->addWidget(pushButton_calculator_2);

        pushButton_recent_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_recent_2->setObjectName("pushButton_recent_2");

        verticalLayout_4->addWidget(pushButton_recent_2);

        pushButton_favorite_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_favorite_2->setObjectName("pushButton_favorite_2");

        verticalLayout_4->addWidget(pushButton_favorite_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        frame_3 = new QFrame(recentcalculation);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 290, 631));
        frame_3->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_menu_5 = new QPushButton(frame_3);
        pushButton_menu_5->setObjectName("pushButton_menu_5");
        pushButton_menu_5->setGeometry(QRect(0, 0, 70, 49));
        sizePolicy.setHeightForWidth(pushButton_menu_5->sizePolicy().hasHeightForWidth());
        pushButton_menu_5->setSizePolicy(sizePolicy);
        pushButton_menu_5->setMaximumSize(QSize(195, 75));
        pushButton_menu_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
"    font-weight: bold;"));
        pushButton_menu_5->setCheckable(true);
        listView_2 = new QListView(frame_3);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(0, 50, 291, 581));
        listView_2->setStyleSheet(QString::fromUtf8("QListView, QListWidget {\n"
"    background-color: #FAFAFA;\n"
"    border: 1px solid #EAEAEA;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    outline: 0; /* Removes the ugly dotted focus box around items */\n"
"}\n"
"\n"
"/* Style each individual history row item */\n"
"QListView::item, QListWidget::item {\n"
"    background-color: #FFFFFF;\n"
"    border-bottom: 1px solid #F0F0F0;\n"
"    padding: 12px;\n"
"    margin-bottom: 4px;\n"
"    border-radius: 4px;\n"
"    color: #111111;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* Highlight color when hovering mouse over a calculation row */\n"
"QListView::item:hover, QListWidget::item:hover {\n"
"    background-color: #F4F4F4;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* Highlight color when a calculation row is selected/clicked */\n"
"QListView::item:selected, QListWidget::item:selected {\n"
"    background-color: #E5E5E5;\n"
"    color: #000000;\n"
"}"));

        retranslateUi(recentcalculation);

        QMetaObject::connectSlotsByName(recentcalculation);
    } // setupUi

    void retranslateUi(QDialog *recentcalculation)
    {
        recentcalculation->setWindowTitle(QCoreApplication::translate("recentcalculation", "Dialog", nullptr));
        pushButton_menu_4->setText(QCoreApplication::translate("recentcalculation", "\342\211\241      ", nullptr));
        pushButton_calculator_2->setText(QCoreApplication::translate("recentcalculation", "Calculator", nullptr));
        pushButton_recent_2->setText(QCoreApplication::translate("recentcalculation", "Recent", nullptr));
        pushButton_favorite_2->setText(QCoreApplication::translate("recentcalculation", "Favorite", nullptr));
        pushButton_menu_5->setText(QCoreApplication::translate("recentcalculation", "\342\211\241      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recentcalculation: public Ui_recentcalculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTCALCULATION_H
