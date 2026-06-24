#ifndef EXTRA_H
#define EXTRA_H

#include <QWidget>
#include <mainwindow.h>

namespace Ui {
class extra;
}

class extra : public QWidget
{
    Q_OBJECT

public:
    explicit extra(QWidget *parent = nullptr);
    ~extra();

     void setCalculatorWindow(MainWindow* calc);

private slots:
    void on_pushButton_sideBarOpen_clicked();

    void on_pushButton_sideBarClose_clicked();

    void on_pushButton_calculator_clicked();

    void on_pushButton_recent_clicked();

    void on_pushButton_extra_clicked();

    void on_pushButton_pi_clicked();

    void on_pushButton_e_clicked();

    void on_pushButton_speedoflight_clicked();

    void on_pushButton_change_color_clicked();

private:
    Ui::extra *ui;
    MainWindow* calculatorWindow;
    int colorIndex;

};

#endif // EXTRA_H
