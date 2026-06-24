/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
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
    QPushButton *pushButton_sqr;
    QPushButton *pushButton_parenthesis;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_division;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_subtraction;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_addition;
    QPushButton *pushButton_On;
    QPushButton *pushButton_answer;
    QPushButton *pushButton_num0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_multiplaction;
    QPushButton *pushButton_menu;
    QLineEdit *lineEdit;
    QPushButton *pushButton_power_2;
    QPushButton *pushButton_clear_clear;
    QPushButton *pushButton_log;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_num3;
    QFrame *frame_background;
    QMenuBar *menubar;
    QMenu *menuNicks_Calculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(296, 688);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(200, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sidebarMenu = new QFrame(centralwidget);
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

        pushButton_sqr = new QPushButton(centralwidget);
        pushButton_sqr->setObjectName("pushButton_sqr");
        pushButton_sqr->setGeometry(QRect(10, 200, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_sqr->sizePolicy().hasHeightForWidth());
        pushButton_sqr->setSizePolicy(sizePolicy);
        pushButton_sqr->setMaximumSize(QSize(250, 400));
        pushButton_sqr->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_parenthesis = new QPushButton(centralwidget);
        pushButton_parenthesis->setObjectName("pushButton_parenthesis");
        pushButton_parenthesis->setGeometry(QRect(80, 200, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_parenthesis->sizePolicy().hasHeightForWidth());
        pushButton_parenthesis->setSizePolicy(sizePolicy);
        pushButton_parenthesis->setMaximumSize(QSize(250, 400));
        pushButton_parenthesis->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName("pushButton_plus_minus");
        pushButton_plus_minus->setGeometry(QRect(150, 200, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_plus_minus->sizePolicy().hasHeightForWidth());
        pushButton_plus_minus->setSizePolicy(sizePolicy);
        pushButton_plus_minus->setMaximumSize(QSize(250, 400));
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(220, 200, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setMaximumSize(QSize(250, 400));
        pushButton_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_num7 = new QPushButton(centralwidget);
        pushButton_num7->setObjectName("pushButton_num7");
        pushButton_num7->setGeometry(QRect(10, 270, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num7->sizePolicy().hasHeightForWidth());
        pushButton_num7->setSizePolicy(sizePolicy);
        pushButton_num7->setMaximumSize(QSize(1000, 1000));
        pushButton_num7->setAutoFillBackground(false);
        pushButton_num7->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_num8 = new QPushButton(centralwidget);
        pushButton_num8->setObjectName("pushButton_num8");
        pushButton_num8->setGeometry(QRect(80, 270, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num8->sizePolicy().hasHeightForWidth());
        pushButton_num8->setSizePolicy(sizePolicy);
        pushButton_num8->setMaximumSize(QSize(1000, 1000));
        pushButton_num8->setAutoFillBackground(false);
        pushButton_num8->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_num9 = new QPushButton(centralwidget);
        pushButton_num9->setObjectName("pushButton_num9");
        pushButton_num9->setGeometry(QRect(150, 270, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num9->sizePolicy().hasHeightForWidth());
        pushButton_num9->setSizePolicy(sizePolicy);
        pushButton_num9->setMaximumSize(QSize(1000, 1000));
        pushButton_num9->setAutoFillBackground(false);
        pushButton_num9->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        pushButton_division->setGeometry(QRect(220, 270, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_division->sizePolicy().hasHeightForWidth());
        pushButton_division->setSizePolicy(sizePolicy);
        pushButton_division->setMaximumSize(QSize(1000, 1000));
        pushButton_division->setStyleSheet(QString::fromUtf8("background-color: #3498db;\n"
"color: black; "));
        pushButton_num4 = new QPushButton(centralwidget);
        pushButton_num4->setObjectName("pushButton_num4");
        pushButton_num4->setGeometry(QRect(10, 340, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num4->sizePolicy().hasHeightForWidth());
        pushButton_num4->setSizePolicy(sizePolicy);
        pushButton_num4->setMaximumSize(QSize(1000, 1000));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(39, 191, 115, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        pushButton_num4->setPalette(palette);
        pushButton_num4->setAutoFillBackground(false);
        pushButton_num4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_num5 = new QPushButton(centralwidget);
        pushButton_num5->setObjectName("pushButton_num5");
        pushButton_num5->setGeometry(QRect(80, 340, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num5->sizePolicy().hasHeightForWidth());
        pushButton_num5->setSizePolicy(sizePolicy);
        pushButton_num5->setMaximumSize(QSize(1000, 1000));
        pushButton_num5->setAutoFillBackground(false);
        pushButton_num5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_num6 = new QPushButton(centralwidget);
        pushButton_num6->setObjectName("pushButton_num6");
        pushButton_num6->setGeometry(QRect(150, 340, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num6->sizePolicy().hasHeightForWidth());
        pushButton_num6->setSizePolicy(sizePolicy);
        pushButton_num6->setMaximumSize(QSize(1000, 1000));
        pushButton_num6->setAutoFillBackground(false);
        pushButton_num6->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
"\n"
""));
        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName("pushButton_subtraction");
        pushButton_subtraction->setGeometry(QRect(220, 340, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_subtraction->sizePolicy().hasHeightForWidth());
        pushButton_subtraction->setSizePolicy(sizePolicy);
        pushButton_subtraction->setMaximumSize(QSize(10001000, 1000));
        pushButton_subtraction->setStyleSheet(QString::fromUtf8("background-color: #3498db;\n"
"color: black; \n"
""));
        pushButton_num1 = new QPushButton(centralwidget);
        pushButton_num1->setObjectName("pushButton_num1");
        pushButton_num1->setGeometry(QRect(10, 410, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num1->sizePolicy().hasHeightForWidth());
        pushButton_num1->setSizePolicy(sizePolicy);
        pushButton_num1->setMaximumSize(QSize(1000, 1000));
        pushButton_num1->setAutoFillBackground(false);
        pushButton_num1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_num2 = new QPushButton(centralwidget);
        pushButton_num2->setObjectName("pushButton_num2");
        pushButton_num2->setGeometry(QRect(80, 410, 62, 59));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_num2->sizePolicy().hasHeightForWidth());
        pushButton_num2->setSizePolicy(sizePolicy1);
        pushButton_num2->setMaximumSize(QSize(1000, 1000));
        pushButton_num2->setAutoFillBackground(false);
        pushButton_num2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_addition = new QPushButton(centralwidget);
        pushButton_addition->setObjectName("pushButton_addition");
        pushButton_addition->setGeometry(QRect(220, 410, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_addition->sizePolicy().hasHeightForWidth());
        pushButton_addition->setSizePolicy(sizePolicy);
        pushButton_addition->setMaximumSize(QSize(1000, 1000));
        pushButton_addition->setStyleSheet(QString::fromUtf8("background-color: #3498db;\n"
"color: black; "));
        pushButton_On = new QPushButton(centralwidget);
        pushButton_On->setObjectName("pushButton_On");
        pushButton_On->setGeometry(QRect(10, 550, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_On->sizePolicy().hasHeightForWidth());
        pushButton_On->setSizePolicy(sizePolicy);
        pushButton_On->setMaximumSize(QSize(1000, 1000));
        pushButton_On->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; \n"
""));
        pushButton_answer = new QPushButton(centralwidget);
        pushButton_answer->setObjectName("pushButton_answer");
        pushButton_answer->setGeometry(QRect(80, 550, 201, 59));
        sizePolicy.setHeightForWidth(pushButton_answer->sizePolicy().hasHeightForWidth());
        pushButton_answer->setSizePolicy(sizePolicy);
        pushButton_answer->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setUnderline(false);
        pushButton_answer->setFont(font);
        pushButton_answer->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1e3c72, stop:1 #2a5298);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num0 = new QPushButton(centralwidget);
        pushButton_num0->setObjectName("pushButton_num0");
        pushButton_num0->setGeometry(QRect(10, 480, 131, 63));
        sizePolicy1.setHeightForWidth(pushButton_num0->sizePolicy().hasHeightForWidth());
        pushButton_num0->setSizePolicy(sizePolicy1);
        pushButton_num0->setMaximumSize(QSize(1000, 1000));
        pushButton_num0->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setGeometry(QRect(150, 480, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_decimal->sizePolicy().hasHeightForWidth());
        pushButton_decimal->setSizePolicy(sizePolicy);
        pushButton_decimal->setMaximumSize(QSize(1000, 1000));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        pushButton_multiplaction = new QPushButton(centralwidget);
        pushButton_multiplaction->setObjectName("pushButton_multiplaction");
        pushButton_multiplaction->setGeometry(QRect(220, 480, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_multiplaction->sizePolicy().hasHeightForWidth());
        pushButton_multiplaction->setSizePolicy(sizePolicy);
        pushButton_multiplaction->setMaximumSize(QSize(1000, 1000));
        pushButton_multiplaction->setStyleSheet(QString::fromUtf8("background-color: #3498db;\n"
"color: black; \n"
"\n"
""));
        pushButton_menu = new QPushButton(centralwidget);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(0, 0, 61, 51));
        sizePolicy.setHeightForWidth(pushButton_menu->sizePolicy().hasHeightForWidth());
        pushButton_menu->setSizePolicy(sizePolicy);
        pushButton_menu->setMaximumSize(QSize(250, 400));
        pushButton_menu->setStyleSheet(QString::fromUtf8("border: none;\n"
"padding: 5px;\n"
"font-size: 26px; /* Increase this number to make the text/icon bigger */\n"
"    font-weight: bold;"));
        pushButton_menu->setCheckable(true);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 50, 290, 71));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(290, 400));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #3498db;\n"
"    background-color: #ffffff;   \n"
"    color: #2c3e50;                  \n"
"    font-size: 20pt;\n"
"    font: Segoe UI;                           \n"
"    padding-right: 10px;            \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498db;\n"
"}"));
        pushButton_power_2 = new QPushButton(centralwidget);
        pushButton_power_2->setObjectName("pushButton_power_2");
        pushButton_power_2->setGeometry(QRect(10, 130, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_power_2->sizePolicy().hasHeightForWidth());
        pushButton_power_2->setSizePolicy(sizePolicy);
        pushButton_power_2->setMaximumSize(QSize(250, 400));
        pushButton_power_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_clear_clear = new QPushButton(centralwidget);
        pushButton_clear_clear->setObjectName("pushButton_clear_clear");
        pushButton_clear_clear->setGeometry(QRect(220, 130, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_clear_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear_clear->setSizePolicy(sizePolicy);
        pushButton_clear_clear->setMaximumSize(QSize(250, 400));
        pushButton_clear_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 108, 123);\n"
"color: black; "));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName("pushButton_log");
        pushButton_log->setGeometry(QRect(150, 130, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy);
        pushButton_log->setMaximumSize(QSize(250, 400));
        pushButton_log->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(80, 130, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setMaximumSize(QSize(250, 400));
        pushButton_percent->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: black; "));
        pushButton_num3 = new QPushButton(centralwidget);
        pushButton_num3->setObjectName("pushButton_num3");
        pushButton_num3->setGeometry(QRect(150, 410, 62, 59));
        sizePolicy.setHeightForWidth(pushButton_num3->sizePolicy().hasHeightForWidth());
        pushButton_num3->setSizePolicy(sizePolicy);
        pushButton_num3->setMaximumSize(QSize(1000, 1000));
        pushButton_num3->setAutoFillBackground(false);
        pushButton_num3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black; \n"
""));
        frame_background = new QFrame(centralwidget);
        frame_background->setObjectName("frame_background");
        frame_background->setGeometry(QRect(0, 0, 291, 611));
        frame_background->setStyleSheet(QString::fromUtf8("color: white;"));
        frame_background->setFrameShape(QFrame::Shape::StyledPanel);
        frame_background->setFrameShadow(QFrame::Shadow::Raised);
        MainWindow->setCentralWidget(centralwidget);
        frame_background->raise();
        pushButton_num3->raise();
        pushButton_sqr->raise();
        pushButton_parenthesis->raise();
        pushButton_plus_minus->raise();
        pushButton_clear->raise();
        pushButton_num7->raise();
        pushButton_num8->raise();
        pushButton_num9->raise();
        pushButton_division->raise();
        pushButton_num4->raise();
        pushButton_num5->raise();
        pushButton_num6->raise();
        pushButton_subtraction->raise();
        pushButton_num1->raise();
        pushButton_num2->raise();
        pushButton_addition->raise();
        pushButton_On->raise();
        pushButton_answer->raise();
        pushButton_num0->raise();
        pushButton_decimal->raise();
        pushButton_multiplaction->raise();
        pushButton_menu->raise();
        lineEdit->raise();
        pushButton_power_2->raise();
        pushButton_clear_clear->raise();
        pushButton_log->raise();
        pushButton_percent->raise();
        sidebarMenu->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 296, 26));
        menuNicks_Calculator = new QMenu(menubar);
        menuNicks_Calculator->setObjectName("menuNicks_Calculator");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNicks_Calculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_menu_2->setText(QCoreApplication::translate("MainWindow", "\342\211\241      ", nullptr));
        pushButton_calculator->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButton_recent->setText(QCoreApplication::translate("MainWindow", "Recent", nullptr));
        pushButton_extra->setText(QCoreApplication::translate("MainWindow", "Extra", nullptr));
        pushButton_sqr->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_parenthesis->setText(QCoreApplication::translate("MainWindow", "( )", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_On->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        pushButton_answer->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_multiplaction->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_menu->setText(QCoreApplication::translate("MainWindow", "\342\211\241      ", nullptr));
        pushButton_power_2->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        pushButton_clear_clear->setText(QCoreApplication::translate("MainWindow", "CC", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        menuNicks_Calculator->setTitle(QCoreApplication::translate("MainWindow", "Nicks Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
