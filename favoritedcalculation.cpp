#include "favoritedcalculation.h"
#include "mainwindow.h"
#include "ui_favoritedcalculation.h"

favoritedcalculation::favoritedcalculation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::favoritedcalculation)
{
    ui->setupUi(this);
    ui->sidebarMenu->hide();
}

favoritedcalculation::~favoritedcalculation()
{
    delete ui;
}
