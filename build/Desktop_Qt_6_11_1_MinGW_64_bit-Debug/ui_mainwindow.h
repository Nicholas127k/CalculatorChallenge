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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num0;
    QPushButton *pushButton_On;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_sqr;
    QPushButton *pushButton_division;
    QPushButton *pushButton_subtraction;
    QPushButton *pushButton_addition;
    QPushButton *pushButton_answer;
    QPushButton *pushButton_multiplaction;
    QLineEdit *lineEdit;
    QPushButton *pushButton_sqr_2;
    QPushButton *pushButton_parenthesis;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_clear_clear;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_clear_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 605);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 121, 31));
        pushButton_num7 = new QPushButton(centralwidget);
        pushButton_num7->setObjectName("pushButton_num7");
        pushButton_num7->setGeometry(QRect(200, 230, 41, 41));
        pushButton_num7->setAutoFillBackground(false);
        pushButton_num7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num8 = new QPushButton(centralwidget);
        pushButton_num8->setObjectName("pushButton_num8");
        pushButton_num8->setGeometry(QRect(250, 230, 41, 41));
        pushButton_num8->setAutoFillBackground(false);
        pushButton_num8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num9 = new QPushButton(centralwidget);
        pushButton_num9->setObjectName("pushButton_num9");
        pushButton_num9->setGeometry(QRect(300, 230, 41, 41));
        pushButton_num9->setAutoFillBackground(false);
        pushButton_num9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num4 = new QPushButton(centralwidget);
        pushButton_num4->setObjectName("pushButton_num4");
        pushButton_num4->setGeometry(QRect(200, 280, 41, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(39, 191, 115, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
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
        pushButton_num4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num5 = new QPushButton(centralwidget);
        pushButton_num5->setObjectName("pushButton_num5");
        pushButton_num5->setGeometry(QRect(250, 280, 41, 41));
        pushButton_num5->setAutoFillBackground(false);
        pushButton_num5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num6 = new QPushButton(centralwidget);
        pushButton_num6->setObjectName("pushButton_num6");
        pushButton_num6->setGeometry(QRect(300, 280, 41, 41));
        pushButton_num6->setAutoFillBackground(false);
        pushButton_num6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num1 = new QPushButton(centralwidget);
        pushButton_num1->setObjectName("pushButton_num1");
        pushButton_num1->setGeometry(QRect(200, 330, 41, 41));
        pushButton_num1->setAutoFillBackground(false);
        pushButton_num1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num2 = new QPushButton(centralwidget);
        pushButton_num2->setObjectName("pushButton_num2");
        pushButton_num2->setGeometry(QRect(250, 330, 41, 41));
        pushButton_num2->setAutoFillBackground(false);
        pushButton_num2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num3 = new QPushButton(centralwidget);
        pushButton_num3->setObjectName("pushButton_num3");
        pushButton_num3->setGeometry(QRect(300, 330, 41, 41));
        pushButton_num3->setAutoFillBackground(false);
        pushButton_num3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_num0 = new QPushButton(centralwidget);
        pushButton_num0->setObjectName("pushButton_num0");
        pushButton_num0->setGeometry(QRect(200, 380, 91, 41));
        pushButton_num0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_On = new QPushButton(centralwidget);
        pushButton_On->setObjectName("pushButton_On");
        pushButton_On->setGeometry(QRect(200, 430, 41, 41));
        pushButton_On->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setGeometry(QRect(300, 380, 41, 41));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_sqr = new QPushButton(centralwidget);
        pushButton_sqr->setObjectName("pushButton_sqr");
        pushButton_sqr->setGeometry(QRect(200, 180, 41, 41));
        pushButton_sqr->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        pushButton_division->setGeometry(QRect(350, 230, 41, 41));
        pushButton_division->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName("pushButton_subtraction");
        pushButton_subtraction->setGeometry(QRect(350, 280, 41, 41));
        pushButton_subtraction->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_addition = new QPushButton(centralwidget);
        pushButton_addition->setObjectName("pushButton_addition");
        pushButton_addition->setGeometry(QRect(350, 330, 41, 41));
        pushButton_addition->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_answer = new QPushButton(centralwidget);
        pushButton_answer->setObjectName("pushButton_answer");
        pushButton_answer->setGeometry(QRect(250, 430, 141, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setUnderline(false);
        pushButton_answer->setFont(font);
        pushButton_answer->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 50);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_multiplaction = new QPushButton(centralwidget);
        pushButton_multiplaction->setObjectName("pushButton_multiplaction");
        pushButton_multiplaction->setGeometry(QRect(350, 380, 41, 41));
        pushButton_multiplaction->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(202, 85, 191, 41));
        pushButton_sqr_2 = new QPushButton(centralwidget);
        pushButton_sqr_2->setObjectName("pushButton_sqr_2");
        pushButton_sqr_2->setGeometry(QRect(200, 130, 41, 41));
        pushButton_sqr_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_parenthesis = new QPushButton(centralwidget);
        pushButton_parenthesis->setObjectName("pushButton_parenthesis");
        pushButton_parenthesis->setGeometry(QRect(250, 130, 41, 41));
        pushButton_parenthesis->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(350, 180, 41, 41));
        pushButton_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(300, 130, 41, 41));
        pushButton_percent->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_clear_clear = new QPushButton(centralwidget);
        pushButton_clear_clear->setObjectName("pushButton_clear_clear");
        pushButton_clear_clear->setGeometry(QRect(350, 130, 41, 41));
        pushButton_clear_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 51, 15);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 50, 113, 26));
        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName("pushButton_plus_minus");
        pushButton_plus_minus->setGeometry(QRect(300, 180, 41, 41));
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        pushButton_clear_2 = new QPushButton(centralwidget);
        pushButton_clear_2->setObjectName("pushButton_clear_2");
        pushButton_clear_2->setGeometry(QRect(250, 180, 41, 41));
        pushButton_clear_2->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 245, 127);\n"
"color: white; \n"
"border: 1px solid #c0c0c0;\n"
"border-radius: 6px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Deluxe Calculator", nullptr));
        pushButton_num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_On->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_sqr->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_answer->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        pushButton_multiplaction->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_sqr_2->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        pushButton_parenthesis->setText(QCoreApplication::translate("MainWindow", "( )", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_clear_clear->setText(QCoreApplication::translate("MainWindow", "CC", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_clear_2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
