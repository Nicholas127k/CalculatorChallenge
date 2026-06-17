#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_answer_clicked()
{

}

void MainWindow::on_pushButton_num0_clicked()
{
    expression.push_back({TokenType::Number, "0"});
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}


void MainWindow::on_pushButton_num1_clicked()
{
    //ui->setupUi(this);
    //conne
    expression.push_back({TokenType::Number, "1"});
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void MainWindow::on_pushButton_num2_clicked()
{
    expression.push_back({TokenType::Number, "2"});
    ui->lineEdit->setText(ui->lineEdit->text() + "2");

}


void MainWindow::on_pushButton_num3_clicked()
{
    expression.push_back({TokenType::Number, "3"});
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}


void MainWindow::on_pushButton_num4_clicked()
{
    expression.push_back({TokenType::Number, "4"});
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}


void MainWindow::on_pushButton_num5_clicked()
{
    expression.push_back({TokenType::Number, "5"});
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}


void MainWindow::on_pushButton_num6_clicked()
{
    expression.push_back({TokenType::Number, "6"});
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}


void MainWindow::on_pushButton_num7_clicked()
{
    expression.push_back({TokenType::Number, "7"});
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}


void MainWindow::on_pushButton_num8_clicked()
{
    expression.push_back({TokenType::Number, "8"});
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}


void MainWindow::on_pushButton_num9_clicked()
{
    expression.push_back({TokenType::Number, "9"});
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}




void MainWindow::on_pushButton_multiplaction_clicked()
{
    expression.push_back({TokenType::Operator, "×"});
    ui->lineEdit->setText(ui->lineEdit->text() + "×");
}


void MainWindow::on_pushButton_addition_clicked()
{
    expression.push_back({TokenType::Operator, "+"});
    ui->lineEdit->setText(ui->lineEdit->text() + "+");
}


void MainWindow::on_pushButton_subtraction_clicked()
{
    expression.push_back({TokenType::Operator, "-"});
    ui->lineEdit->setText(ui->lineEdit->text() + "-");
}


void MainWindow::on_pushButton_division_clicked()
{
    expression.push_back({TokenType::Operator, "/"});
    ui->lineEdit->setText(ui->lineEdit->text() + "/");
}

void MainWindow::on_pushButton_sqr_clicked()
{
    // For square root use
    if(containsOperator() == false){
        if (expression.isEmpty())
            return;

        QString numberString;

        for(const Token& token : expression)
        {
            numberString += token.value;
        }

        double value = numberString.toDouble();

        //value = value * value;
        value = std::sqrt(value);

        expression.clear();
        expression.push_back({TokenType::Number,
                              QString::number(value)});

        ui->lineEdit->setText(QString::number(value));
    }
    else{
        expression.clear();
        ui->lineEdit->setText("Invalid Chr");


    }

}

void MainWindow::on_pushButton_sqr_2_clicked()
{
    if(containsOperator() == false){
        if (expression.isEmpty())
            return;

        QString inputString;

        for(const Token& token : expression){
            inputString += token.value;
        }

        double value = inputString.toDouble();
        value = value * value;
        expression.clear();
        expression.push_back({TokenType::Number, QString::number(value)});
        ui->lineEdit->setText(QString::number(value));

    }
    else{
        expression.clear();
        ui->lineEdit->setText("Invalid Chr");

    }
}

void MainWindow::on_pushButton_paranthesis_clicked()
{

}

void MainWindow::on_pushButton_percent_clicked()
{
    //First check if operators or unalloaded variables then do the percent
    //After next button is pressed clear value and place

}

void MainWindow::on_pushButton_clear_clicked()
{
    expression.clear();
    ui->lineEdit->setText("");
}

bool MainWindow::containsOperator(){
    for(const Token& token : expression){
        if(token.type == TokenType::Operator){
            return true;
        }

    }
    return false;
}


void MainWindow::on_pushButton_decimal_clicked()
{
    expression.push_back({TokenType::Number, "."});
    ui->lineEdit->setText(ui->lineEdit->text() + ".");
}

