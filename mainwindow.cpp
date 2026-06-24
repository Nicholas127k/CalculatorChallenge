#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "favoritedcalculation.h"
#include "recentcal.h"
#include "extra.h"

QStringList MainWindow::recentSearches;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sidebarMenu->hide();
    ui->lineEdit->setPlaceholderText("Welcome!");

    flashTimer = new QTimer(this);
    colorIndex = 0;

    connect(flashTimer, &QTimer::timeout,
            this, &MainWindow::flashColors);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_answer_clicked()
{
    if (expression.isEmpty() || (expression.back().type == TokenType::Operator))
        return;
    QVector<Token> tokens = expression;
    QString originalExpression = tokensToString(expression);
    bool parenthesisLoop = true;
    while(parenthesisLoop){
        parenthesisLoop = false;
        int frontIndex = -1;

        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i].type == TokenType::LeftParen){
                frontIndex = i;
            }
            else if(tokens[i].type == TokenType::RightParen){
                int backIndex = i;
                QVector<Token> input = tokens.mid(frontIndex + 1, backIndex - frontIndex - 1);
                double answer = evaluateExpression(input);

                int funcIndex = frontIndex - 1;
                bool hasFunction = (funcIndex >= 0 && tokens[funcIndex].type == TokenType::Function);

                if (hasFunction) {
                    QString funcName = tokens[funcIndex].value;
                    if (funcName == "log") {
                        answer = log10(answer);
                    }
                    else if(funcName == "c"){
                        answer = answer * 299792458;
                    }
                    else if(funcName == "e"){
                        answer = answer * 2.71828;
                    }
                    else if(funcName == "π"){
                        answer = answer * 3.1415926;
                    }
                }

                Token resultToken;
                resultToken.type = TokenType::Number;
                resultToken.value = QString::number(answer);

                int removeStart = hasFunction ? funcIndex : frontIndex;
                int removeCount = hasFunction ? (backIndex - funcIndex + 1) : (backIndex - frontIndex + 1);

                tokens.remove(removeStart, removeCount);
                tokens.insert(removeStart, resultToken);
                parenthesisLoop = true;
                break;
            }
        }
    }

    for(int i = 0; i < tokens.size(); i++) {
        if(tokens[i].type == TokenType::Function) {
            if(tokens[i].value == "π") {
                tokens[i].type = TokenType::Number;
                tokens[i].value = "3.141592653589";
            }
            else if(tokens[i].value == "e") {
                tokens[i].type = TokenType::Number;
                tokens[i].value = "2.718281828459";
            }
            else if(tokens[i].value == "c") {
                tokens[i].type = TokenType::Number;
                tokens[i].value = "299792458";
            }
        }
    }

    double answer = evaluateExpression(tokens);
    QString answerStr = QString::number(answer);

    QString fullCalculation = originalExpression + " = " + answerStr;
    addToRecentSearches(fullCalculation);

    expression.clear();
    Token resultToken;
    resultToken.type = TokenType::Number;
    resultToken.value = answerStr;
    expression.push_back(resultToken);

    ui->lineEdit->setText(answerStr);
}


void MainWindow::on_pushButton_num0_clicked()
{
    QString digit = "0";
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen
        || expression.back().type == TokenType::RightParen)
    {
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
    if(containsOperator() == false){
        if (expression.isEmpty())
            return;

        QString numberString;

        for(const Token& token : expression)
        {
            numberString += token.value;
        }

        double value = numberString.toDouble();

        value = std::sqrt(value);

        expression.clear();
        expression.push_back({TokenType::Number, QString::number(value)});

        ui->lineEdit->setText(QString::number(value));
    }
    else{
        expression.clear();
        ui->lineEdit->setText("Invalid Chr");


    }

}


void MainWindow::on_pushButton_power_2_clicked()
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


void MainWindow::on_pushButton_percent_clicked()
{
    if(expression.empty()){
        return;
    }
    Token token = expression[0];
    if(expression.size() == 1 && token.type == TokenType::Number){

        double value = expression[0].value.toDouble();

        value /= 100.0;

        expression[0].value = QString::number(value);

        ui->lineEdit->setText(expression[0].value);
    }


}


void MainWindow::on_pushButton_clear_clicked()
{
    /* Clears last inputed variable*/
    if(expression.empty()){
        return;
    }
    Token& lastToken = expression.back();

    if (lastToken.type == TokenType::Number && lastToken.value.length() > 1) {
        lastToken.value.chop(1);
    }
    else {
        expression.removeLast();
    }
    QString displayText = "";
    for(const Token& token : expression){
        displayText += token.value;
    }
    ui->lineEdit->setText(displayText);
}


bool MainWindow::containsOperator(){
    for(const Token& token : expression){
        if(token.type == TokenType::Operator){
            return true;
        }
    }
    return false;
}


void MainWindow::on_pushButton_clear_clear_clicked()
{
    if(expression.empty()){
        return;
    }
    expression.clear();
    ui->lineEdit->setText("");
}


void MainWindow::on_pushButton_decimal_clicked()
{
    QString digit = ".";

    if (expression.isEmpty() || expression.back().type == TokenType::Operator) {
        Token newToken;
        newToken.type = TokenType::Number;
        newToken.value = "0.";
        expression.push_back(newToken);
        ui->lineEdit->setText(ui->lineEdit->text() + newToken.value);
    }
    else {
        if(!expression.back().value.contains(".")){
            expression.back().value += digit;
            ui->lineEdit->setText(ui->lineEdit->text() + digit);
        }
    }

}


void MainWindow::on_pushButton_plus_minus_clicked()
{
    /* Changes the last inputed number to the inverse value */
    if (expression.isEmpty()
        || expression.back().type == TokenType::Operator
        || expression.back().type == TokenType::LeftParen)
    {
        Token newToken;
        newToken.value = "-";
        newToken.type = TokenType::Number;
        expression.push_back(newToken);
        ui->lineEdit->setText(ui->lineEdit->text() + "-");

        return;
    }
    if(expression.back().type == TokenType::Number){
        QString oldValue = expression.back().value;
        QString newValue = oldValue.startsWith("-") ? oldValue.mid(1) : "-" + oldValue;
        expression.back().value = newValue;

        QString text = ui->lineEdit->text();
        text.chop(oldValue.length());
        text += newValue;
        ui->lineEdit->setText(text);

        return;
    }
    if(expression.back().type == TokenType::RightParen){
        return;
    }
}


void MainWindow::on_pushButton_parenthesis_clicked()
{
    int count = 0;
    for (const Token& token : expression) {
        if (token.value == "(") count++;
        if (token.value == ")") count--;
    }

    if (expression.isEmpty()) {
        Token newToken;
        newToken.type = TokenType::LeftParen;
        newToken.value = "(";
        expression.push_back(newToken);
        ui->lineEdit->setText(ui->lineEdit->text() + newToken.value);
        return;
    }

    if(expression.back().type == TokenType::Operator || expression.back().type == TokenType::LeftParen){
        Token newToken;
        newToken.type = TokenType::LeftParen;
        newToken.value = "(";
        expression.push_back(newToken);
        ui->lineEdit->setText(ui->lineEdit->text() + newToken.value);
    }
    else if(expression.back().type == TokenType::Number || expression.back().type == TokenType::RightParen){
        if (count > 0) {
            Token newToken;
            newToken.type = TokenType::RightParen;
            newToken.value = ")";
            expression.push_back(newToken);
            ui->lineEdit->setText(ui->lineEdit->text() + newToken.value);
        }
        else{
            expression.push_back({TokenType::Operator, "×"});
            ui->lineEdit->setText(ui->lineEdit->text() + "×");
            Token newToken;
            newToken.type = TokenType::LeftParen;
            newToken.value = "(";
            expression.push_back(newToken);
            ui->lineEdit->setText(ui->lineEdit->text() + newToken.value);
        }
    }
}


double MainWindow::evaluateExpression(QVector<Token> tokens)
{
    double answer;

    bool multLoop = true;
    while (multLoop){
        multLoop = false;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i].value == "×" || tokens[i].value == "/")
            {

                multLoop = true;
                int location = i;
                int oneBehind = location - 1;
                int oneInfront = location + 1;
                if(tokens[location].value == "×"){
                    answer = tokens[oneBehind].value.toDouble() * tokens[oneInfront].value.toDouble();
                }
                if(tokens[location].value == "/"){
                    answer = tokens[oneBehind].value.toDouble() / tokens[oneInfront].value.toDouble();
                }
                tokens[oneBehind].value = QString::number(answer);
                tokens.removeAt(i);
                tokens.removeAt(i);

                break;
            }

        }
    }
    bool addLoop = true;
    while (addLoop){
        addLoop = false;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i].value == "+" || tokens[i].value == "-")
            {
                addLoop = true;
                int location = i;
                int oneBehind = location - 1;
                int oneInfront = location + 1;
                if(tokens[location].value == "+"){
                    answer = tokens[oneBehind].value.toDouble() + tokens[oneInfront].value.toDouble();
                }
                if(tokens[location].value == "-"){
                    answer = tokens[oneBehind].value.toDouble() - tokens[oneInfront].value.toDouble();
                }
                tokens[oneBehind].value = QString::number(answer);
                tokens.removeAt(i);
                tokens.removeAt(i);

                break;
            }
        }
    }
    return tokens.isEmpty() ? 0.0 : tokens[0].value.toDouble();
}


void MainWindow::on_pushButton_log_clicked()
{
    if (!expression.isEmpty() && (expression.back().type == TokenType::Number || expression.back().type == TokenType::RightParen)){
        expression.push_back({TokenType::Operator, "×"});
        ui->lineEdit->setText(ui->lineEdit->text() + "×");
    }

    Token token;
    token.type = TokenType::Function;
    token.value = "log";
    expression.push_back(token);

    Token newToken;
    newToken.type = TokenType::LeftParen;
    newToken.value = "(";
    expression.push_back(newToken);
    ui->lineEdit->setText(ui->lineEdit->text() + "log(");
}


void MainWindow::on_pushButton_On_clicked()
{
    if(flashTimer->isActive())
    {
        flashTimer->stop();


        this->setStyleSheet("");
    }
    else
    {
        flashTimer->start(700);
    }


}


void MainWindow::flashColors()
{
    QString colors[] =
        {
            "#fdb0aa", // red
            "#fdd4aa", // orange
            "#fdf7aa", // yellow
            "#bcfdaa", // green
            "#aab0fd", // blue
            "#aafddf", // cyan
            "#c8aafd",
            "#ffffff"  // white
        };

    QString color = colors[colorIndex];

    QString style =
        QString("background-color: %1;"
               ).arg(color);

    ui->frame_background->setStyleSheet(style);
    colorIndex++;
    if(colorIndex >= 8)
        colorIndex = 0;
}


void MainWindow::on_pushButton_menu_clicked()
{
   ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible());

}


void MainWindow::on_pushButton_recent_clicked()
{
    ui->sidebarMenu->hide();
    recentcal *recentWindow = new recentcal();
    recentWindow->setCalculatorWindow(this);
    recentWindow->setFixedSize(291, 666);
    recentWindow->setWindowFlags(Qt::Window | Qt::Tool | Qt::FramelessWindowHint);

    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    recentWindow->move(screenPos);

    recentWindow->show();
    recentWindow->raise();  // Bring to front
    recentWindow->activateWindow();
}


void MainWindow::on_pushButton_extra_clicked()
{
    ui->sidebarMenu->hide();
    extra *extraWindow = new extra();
    extraWindow->setCalculatorWindow(this);
    extraWindow->setFixedSize(291, 666);
    extraWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    // Get the actual screen position
    QPoint screenPos = this->mapToGlobal(QPoint(0, 0));
    extraWindow->move(screenPos);
    extraWindow->show();
    extraWindow->raise();  // Bring to front
    extraWindow->activateWindow();

}


void MainWindow::on_pushButton_menu_2_clicked()
{
    if(ui->sidebarMenu->isVisible()){
        ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible());
    }
    else{
        ui->sidebarMenu->setVisible(ui->sidebarMenu->isVisible());
    }
}


void MainWindow::on_pushButton_calculator_clicked()
{
    ui->sidebarMenu->setVisible(!ui->sidebarMenu->isVisible());
}


void MainWindow::addToRecentSearches(QString calculation)
{
    /*Adds recent searchs to recent search list */
    if(!calculation.isEmpty()) {
        MainWindow::recentSearches.prepend(calculation);
        /* Keeps only the last 10*/
        if(MainWindow::recentSearches.size() > 10) {
            MainWindow::recentSearches.removeLast();
        }
    }
}


void MainWindow::setExpressionFromString(QString expr)
{

    if(expr.contains(" = ")) {
        expr = expr.split(" = ")[0];
    }
    expr = expr.remove(" ");
    expression.clear();

    int i = 0;
    while(i < expr.length()) {
        QChar current = expr[i];

        if(current.isDigit() || current == '.') {
            QString number;
            while(i < expr.length() && (expr[i].isDigit() || expr[i] == '.')) {
                number += expr[i];
                i++;
            }
            Token token;
            token.type = TokenType::Number;
            token.value = number;
            expression.push_back(token);
        }
        else if(current == '+' || current == '-' || current == "×" || current == '/') {
            Token token;
            token.type = TokenType::Operator;
            token.value = current;
            expression.push_back(token);
            i++;
        }
        else if(current == '(') {
            Token token;
            token.type = TokenType::LeftParen;
            token.value = "(";
            expression.push_back(token);
            i++;
        }
        else if(current == ')') {
            Token token;
            token.type = TokenType::RightParen;
            token.value = ")";
            expression.push_back(token);
            i++;
        }
        else if(current.isLetter()) {
            QString func;
            while(i < expr.length() && expr[i].isLetter()) {
                func += expr[i];
                i++;
            }
            Token token;
            token.type = TokenType::Function;
            token.value = func;
            expression.push_back(token);
        }
        else {
            i++;
        }
    }
    ui->lineEdit->setText(expr);
}


QString MainWindow::tokensToString(const QVector<Token>& tokens)
{
    QString result;
    for(int i = 0; i < tokens.size(); i++) {
        result += tokens[i].value;
        if(i < tokens.size() - 1) {
            result += " ";  // Add space between tokens
        }
    }
    return result;
}


void MainWindow::addTokenToExpression(Token token)
{
    expression.push_back(token);

    QString display = ui->lineEdit->text();
    display += token.value;
    ui->lineEdit->setText(display);
}


bool MainWindow::lastTokenIsOperator()
{
    if(expression.isEmpty()) {
        return true;  // Treat empty as "can add a number"
    }

    Token lastToken = expression.last();
    return (lastToken.type == TokenType::Operator ||
            lastToken.type == TokenType::LeftParen);
}


Token MainWindow::getLastToken()
{
    if(expression.isEmpty()) {
        Token empty;
        empty.type = TokenType::Number;
        empty.value = "";
        return empty;
    }
    return expression.last();
}


void MainWindow::bringToFront()
{
    this->show();
    this->raise();
    this->activateWindow();
}