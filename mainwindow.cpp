#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "favoritedcalculation.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->sidebarMenu->hide();
    //ui->frame_background->setFixedSize(250, 400);
    //this->layout()->setSizeConstraint(QLayout::SetFixedSize);
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
    if (expression.isEmpty())
        return;
    QVector<Token> tokens = expression;
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

    double answer = evaluateExpression(tokens);
    QString answerStr = QString::number(answer);

    expression.clear();
    Token resultToken;
    resultToken.type = TokenType::Number;
    resultToken.value = answerStr;
    expression.push_back(resultToken);

    ui->lineEdit->setText(answerStr);
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

void MainWindow::on_pushButton_percent_clicked()
{
    //First check if operators or unalloaded variables then do the percent
    //After next button is pressed clear value and place
    if(expression.empty()){
        return;
    }
    Token token = expression[0];
    if(expression.size() == 1 && token.type == TokenType::Number){

        double value = expression[0].value.toDouble();

        value *= 100.0;

        expression[0].value = QString::number(value);

        ui->lineEdit->setText(expression[0].value);
    }


}

void MainWindow::on_pushButton_clear_clicked()
{
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
            "#aab0fd", // magenta
            "#c8aafd",
            "#ffffff"  // white
        };

    QString color = colors[colorIndex];

    QString style =
        QString("background-color: %1;"
               ).arg(color);

    // Display
    //ui->frame_background->setStyleSheet(style);

        /*

    // All buttons
    QList<QPushButton*> buttons =
        findChildren<QPushButton*>();

    for (QPushButton *button : numberButtons)
    {
        button->setStyleSheet(QString("color: white"
                                      "background-color: %1;"
                                      ).arg(color));
    }

    for (QPushButton *button : operatorButtons)
    {
        button->setStyleSheet(QString("color: white;"
                              "background-color: %1;"
                                      ).arg(color));
    }

    for (QPushButton *button : functionButtons)
    {
        button->setStyleSheet(QString("color:%1;"
                              "background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #1e3c72, stop:1 #2a5298);"
                              "border: 1px solid #c0c0c0;"
                              ).arg(color));
    }
    */
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

}


void MainWindow::on_pushButton_favorite_clicked()
{
    favoritedcalculation *recentWindow = new favoritedcalculation(this);
    recentWindow->setFixedSize(290, 631);
    recentWindow->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint);
    recentWindow->move(this->x(), this->y());
    recentWindow->show();
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

