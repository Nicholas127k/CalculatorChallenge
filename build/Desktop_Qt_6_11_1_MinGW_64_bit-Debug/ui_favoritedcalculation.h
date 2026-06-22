/********************************************************************************
** Form generated from reading UI file 'favoritedcalculation.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORITEDCALCULATION_H
#define UI_FAVORITEDCALCULATION_H

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

class Ui_favoritedcalculation
{
public:
    QFrame *sidebarMenu;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_menu_2;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_calculator;
    QPushButton *pushButton_recent;
    QPushButton *pushButton_favorite;
    QSpacerItem *verticalSpacer;
    QFrame *frame_2;
    QPushButton *pushButton_menu_3;
    QListView *listView;

    void setupUi(QDialog *favoritedcalculation)
    {
        if (favoritedcalculation->objectName().isEmpty())
            favoritedcalculation->setObjectName("favoritedcalculation");
        favoritedcalculation->resize(984, 628);
        sidebarMenu = new QFrame(favoritedcalculation);
        sidebarMenu->setObjectName("sidebarMenu");
        sidebarMenu->setGeometry(QRect(700, -10, 191, 631));
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
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_menu_2->sizePolicy().hasHeightForWidth());
        pushButton_menu_2->setSizePolicy(sizePolicy);
        pushButton_menu_2->setMaximumSize(QSize(195, 75));
        pushButton_menu_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
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

        verticalLayout_3->addWidget(pushButton_calculator);

        pushButton_recent = new QPushButton(verticalLayoutWidget);
        pushButton_recent->setObjectName("pushButton_recent");

        verticalLayout_3->addWidget(pushButton_recent);

        pushButton_favorite = new QPushButton(verticalLayoutWidget);
        pushButton_favorite->setObjectName("pushButton_favorite");

        verticalLayout_3->addWidget(pushButton_favorite);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        frame_2 = new QFrame(favoritedcalculation);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 290, 631));
        frame_2->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_menu_3 = new QPushButton(frame_2);
        pushButton_menu_3->setObjectName("pushButton_menu_3");
        pushButton_menu_3->setGeometry(QRect(0, 0, 70, 49));
        sizePolicy.setHeightForWidth(pushButton_menu_3->sizePolicy().hasHeightForWidth());
        pushButton_menu_3->setSizePolicy(sizePolicy);
        pushButton_menu_3->setMaximumSize(QSize(195, 75));
        pushButton_menu_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
"    font-weight: bold;"));
        pushButton_menu_3->setCheckable(true);
        listView = new QListView(frame_2);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 50, 291, 581));
        listView->setStyleSheet(QString::fromUtf8("QListView, QListWidget {\n"
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

        retranslateUi(favoritedcalculation);

        QMetaObject::connectSlotsByName(favoritedcalculation);
    } // setupUi

    void retranslateUi(QDialog *favoritedcalculation)
    {
        favoritedcalculation->setWindowTitle(QCoreApplication::translate("favoritedcalculation", "Dialog", nullptr));
        pushButton_menu_2->setText(QCoreApplication::translate("favoritedcalculation", "\342\211\241      ", nullptr));
        pushButton_calculator->setText(QCoreApplication::translate("favoritedcalculation", "Calculator", nullptr));
        pushButton_recent->setText(QCoreApplication::translate("favoritedcalculation", "Recent", nullptr));
        pushButton_favorite->setText(QCoreApplication::translate("favoritedcalculation", "Favorite", nullptr));
        pushButton_menu_3->setText(QCoreApplication::translate("favoritedcalculation", "\342\211\241      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class favoritedcalculation: public Ui_favoritedcalculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITEDCALCULATION_H
