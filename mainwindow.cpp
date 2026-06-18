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


//Could do negative numbers



void MainWindow::on_pushButton_answer_clicked()
{
    if (expression.isEmpty())
        return;
    QVector<double> numbers;
    QVector<QString> operators;
    for(const Token& token : expression){
        //Expression is Operator
        if(token.type == TokenType::Operator){
            operators.push_back(token.value);
        }
        else if (token.type == TokenType::Number){
            numbers.push_back(token.value.toDouble());
        }


    }
    QVector<int> parenthesis;
    QVector<int> exponents;

    double answer;

    bool multLoop = true;
    while (multLoop){
        multLoop = false;
        for(int i = 0; i < expression.size(); i++){
            if(expression[i].value == "×" || expression[i].value == "/")
            {

                multLoop = true;
                int location = i;
                int oneBehind = location - 1;
                int oneInfront = location + 1;
                if(expression[location].value == "×"){
                    answer = expression[oneBehind].value.toDouble() * expression[oneInfront].value.toDouble();
                }
                if(expression[location].value == "/"){
                    answer = expression[oneBehind].value.toDouble() / expression[oneInfront].value.toDouble();
                }
                expression[oneBehind].value = QString::number(answer);
                expression.removeAt(i);
                expression.removeAt(i);

                break;
            }

        }
    }
    bool addLoop = true;
    while (addLoop){
        addLoop = false;
        for(int i = 0; i < expression.size(); i++){
            if(expression[i].value == "+" || expression[i].value == "-")
            {
                addLoop = true;
                int location = i;
                int oneBehind = location - 1;
                int oneInfront = location + 1;
                if(expression[location].value == "+"){
                    answer = expression[oneBehind].value.toDouble() + expression[oneInfront].value.toDouble();
                }
                if(expression[location].value == "-"){
                    answer = expression[oneBehind].value.toDouble() - expression[oneInfront].value.toDouble();
                }
                expression[oneBehind].value = QString::number(answer);
                expression.removeAt(i);
                expression.removeAt(i);

                break;
            }
        }
    }

    if (!expression.isEmpty()) {
        ui->lineEdit->setText(expression[0].value);
    }
}


void MainWindow::on_pushButton_num0_clicked()
{
    QString digit = "0";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num1_clicked()
{
    QString digit = "1";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num2_clicked()
{
    QString digit = "2";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num3_clicked()
{
    QString digit = "3";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num4_clicked()
{
    QString digit = "4";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num5_clicked()
{
    QString digit = "5";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num6_clicked()
{
    QString digit = "6";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num7_clicked()
{
    QString digit = "7";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num8_clicked()
{
    QString digit = "8";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_num9_clicked()
{
    QString digit = "9";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = digit;
        expression.push_back(newToken);
    }
    else {
        expression.back().value += digit;
    }

    ui->lineEdit->setText(ui->lineEdit->text() + digit);
}


void MainWindow::on_pushButton_multiplaction_clicked()
{
    if (expression.isEmpty())
        return;
    if (expression.back().type == TokenType::Operator)
        return;
    expression.push_back({TokenType::Operator, "×"});
    ui->lineEdit->setText(ui->lineEdit->text() + "×");
}


void MainWindow::on_pushButton_addition_clicked()
{
    if (expression.isEmpty())
        return;
    if (expression.back().type == TokenType::Operator)
        return;
    expression.push_back({TokenType::Operator, "+"});
    ui->lineEdit->setText(ui->lineEdit->text() + "+");
}


void MainWindow::on_pushButton_subtraction_clicked()
{
    if (expression.isEmpty())
        return;
    if (expression.back().type == TokenType::Operator)
        return;
    expression.push_back({TokenType::Operator, "-"});
    ui->lineEdit->setText(ui->lineEdit->text() + "-");
}


void MainWindow::on_pushButton_division_clicked()
{
    if (expression.isEmpty())
        return;
    if (expression.back().type == TokenType::Operator)
        return;
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

