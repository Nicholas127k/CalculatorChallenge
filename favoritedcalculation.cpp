#include "favoritedcalculation.h"
#include "ui_favoritedcalculation.h"

favoritedcalculation::favoritedcalculation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::favoritedcalculation)
{
    ui->setupUi(this);
}

favoritedcalculation::~favoritedcalculation()
{
    delete ui;
}
