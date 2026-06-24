#include "extra.h"
#include "ui_extra.h"
#include "recentcal.h"
#include "mainwindow.h"

extra::extra(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::extra)
{
    ui->setupUi(this);
    ui->sidebarMenu->hide();
    colorIndex = 0;
}

extra::~extra()
{
    delete ui;
}

void extra::on_pushButton_sideBarOpen_clicked()
{
    ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible());
}


void extra::on_pushButton_sideBarClose_clicked()
{
    if(ui->sidebarMenu->isVisible()){
        ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible()); //Make it invisible
    }
    else{
        ui->sidebarMenu->setVisible(ui->sidebarMenu->isVisible()); //Bring it infront
    }
}


void extra::on_pushButton_calculator_clicked()
{

    MainWindow *recentWindow = new MainWindow();
    recentWindow->setFixedSize(290, 666);
    recentWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    recentWindow->move(screenPos);
    recentWindow->show();
    recentWindow->raise();
    recentWindow->activateWindow();
}


void extra::on_pushButton_recent_clicked()
{
    ui->sidebarMenu->hide();
    recentcal *recentWindow = new recentcal();
    recentWindow->setFixedSize(291, 666);
    recentWindow->setWindowFlags(Qt::Window | Qt::Tool | Qt::FramelessWindowHint);

    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    recentWindow->move(screenPos);
    recentWindow->show();
    recentWindow->raise();
    recentWindow->activateWindow();
}



void extra::on_pushButton_extra_clicked()
{
    ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible()); //Make it invisible
}


void extra::setCalculatorWindow(MainWindow* calc)
{
    calculatorWindow = calc;
}

void extra::on_pushButton_pi_clicked()
{
    ui->sidebarMenu->hide();
    if(!calculatorWindow->lastTokenIsOperator()) {
        Token token;
        token.type = TokenType::Operator;
        token.value = "×";
        calculatorWindow->addTokenToExpression(token);
    }
    Token token;
    token.type = TokenType::Function;  // or Function, depending on your needs
    token.value = "π";
    calculatorWindow->addTokenToExpression(token);

    // Go back to calculator
    calculatorWindow->bringToFront();
    this->hide();
}

void extra::on_pushButton_e_clicked()
{
    ui->sidebarMenu->hide();
    if(!calculatorWindow->lastTokenIsOperator()) {
        Token token;
        token.type = TokenType::Operator;
        token.value = "×";
        calculatorWindow->addTokenToExpression(token);
    }
    Token token;
    token.type = TokenType::Function;
    token.value = "e";
    calculatorWindow->addTokenToExpression(token);

    calculatorWindow->bringToFront();
    this->hide();
}

void extra::on_pushButton_speedoflight_clicked()
{
    ui->sidebarMenu->hide();
    if(!calculatorWindow->lastTokenIsOperator()) {
        Token token;
        token.type = TokenType::Operator;
        token.value = "×";
        calculatorWindow->addTokenToExpression(token);
    }
    Token token;
    token.type = TokenType::Function;
    token.value = "c";
    calculatorWindow->addTokenToExpression(token);

    calculatorWindow->bringToFront();
    this->hide();
}


void extra::on_pushButton_change_color_clicked()
{
    QString colors[] =
        {
            "#fdb0aa", // red
            "#fdd4aa", // orange
            "#fdf7aa", // yellow
            "#bcfdaa", // green
            "#aab0fd", // blue
            "#aafddf", // cyan
            "#ffffff",
            "#c8aafd"
        };

    QString color = colors[colorIndex];
    QString style = QString(
                        "QFrame#frame_background, QFrame#frame_recent, QFrame#frame_extra {"
                        "    background-color: %1;"
                        "}"
                        ).arg(color);

    // Apply the style to the entire application context!
    qApp->setStyleSheet(style);
    colorIndex++;
    if(colorIndex >= 8)
        colorIndex = 0;
}

