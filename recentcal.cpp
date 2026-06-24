#include "recentcal.h"
#include "mainwindow.h"
#include "favoritedcalculation.h"
#include "extra.h"
#include "ui_recentcal.h"
#include <QPainter>
#include <QStyleOption>
#include <QListView>
#include <QMainWindow>

recentcal::recentcal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::recentcal)
{
    ui->setupUi(this);
    ui->sidebarMenu->hide();
    ui->listWidget->addItems(MainWindow::recentSearches);

    connect(ui->listWidget, &QListWidget::itemClicked,
            this, &recentcal::on_listWidget_itemClicked);

}

recentcal::~recentcal()
{
    delete ui;
}


void recentcal::on_pushButton_menu_3_clicked()
{
    ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible());
}


void recentcal::on_pushButton_menu_2_clicked()
{

    if(ui->sidebarMenu->isVisible()){
        ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible()); //Make it invisible
    }
    else{
        ui->sidebarMenu->setVisible(ui->sidebarMenu->isVisible()); //Bring it infront
    }
}


void recentcal::on_pushButton_calculator_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->setFixedSize(290, 666);
    mainWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    mainWindow->move(screenPos);

    mainWindow->show();
    mainWindow->raise();
    mainWindow->activateWindow();

}


void recentcal::on_pushButton_recent_clicked()
{
    ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible()); //Make it invisible
}


void recentcal::on_pushButton_extra_clicked()
{
    extra *extraWindow = new extra();
    extraWindow->setCalculatorWindow(calculatorWindow);
    extraWindow->setFixedSize(291, 666);
    extraWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    extraWindow->move(screenPos);

    extraWindow->show();
    extraWindow->raise();
    extraWindow->activateWindow();

}


void recentcal::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString selectedText = item->text();

    MainWindow *calcWindow = new MainWindow();
    calcWindow->setFixedSize(290, 666);
    calcWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    calcWindow->move(screenPos);
    // Fill in the calculator with the selected search
    calcWindow->setExpressionFromString(selectedText);

    calcWindow->show();
    this->hide();
}


void recentcal::on_pushButton_clearall_clicked()
{
    MainWindow::recentSearches.clear();
    ui->listWidget->clear();
}


void recentcal::setCalculatorWindow(MainWindow* calc)
{
    calculatorWindow = calc;
}
