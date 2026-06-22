#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QList>
#include <QPushButton>


enum class TokenType{
    Number,
    Operator,
    LeftParen,
    RightParen,
    Function
};

struct Token
{
    TokenType type;
    QString value;
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:

    void on_pushButton_answer_clicked();

    void on_pushButton_num1_clicked();

    void on_pushButton_num2_clicked();

    void on_pushButton_num3_clicked();

    void on_pushButton_num4_clicked();

    void on_pushButton_num5_clicked();

    void on_pushButton_num6_clicked();

    void on_pushButton_num7_clicked();

    void on_pushButton_num8_clicked();

    void on_pushButton_num9_clicked();

    void on_pushButton_num0_clicked();

    void on_pushButton_multiplaction_clicked();

    void on_pushButton_addition_clicked();

    void on_pushButton_subtraction_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_sqr_clicked();

    void on_pushButton_sqr_2_clicked();

    void on_pushButton_percent_clicked();

    void on_pushButton_clear_clicked();

    bool containsOperator();

    void on_pushButton_decimal_clicked();

    void on_pushButton_plus_minus_clicked();

    void on_pushButton_parenthesis_clicked();

    void on_pushButton_clear_clear_clicked();

    double evaluateExpression(QVector<Token> tokens);

    void on_pushButton_log_clicked();

    void on_pushButton_On_clicked();

    void flashColors();

    void on_pushButton_menu_clicked();

    void on_pushButton_recent_clicked();

    void on_pushButton_favorite_clicked();

    void on_pushButton_menu_2_clicked();

    void on_pushButton_calculator_clicked();

private:
    QVector<Token> expression;

    Ui::MainWindow *ui;
    QTimer *flashTimer;
    int colorIndex;
    QList<QPushButton*> numberButtons;
    QList<QPushButton*> operatorButtons;
    QList<QPushButton*> functionButtons;


};
#endif // MAINWINDOW_H
