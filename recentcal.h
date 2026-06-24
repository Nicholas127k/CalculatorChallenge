#ifndef RECENTCAL_H
#define RECENTCAL_H

#include <QWidget>
#include <QListWidgetItem>
#include <mainwindow.h>

namespace Ui {
class recentcal;
}

class recentcal : public QWidget
{
    Q_OBJECT

public:
    explicit recentcal(QWidget *parent = nullptr);
    ~recentcal();

    void setCalculatorWindow(MainWindow* calc);

private slots:
    void on_pushButton_menu_3_clicked();

    void on_pushButton_menu_2_clicked();

    void on_pushButton_calculator_clicked();

    void on_pushButton_recent_clicked();

    void on_pushButton_extra_clicked();

     void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clearall_clicked();

private:
    Ui::recentcal *ui;
     MainWindow* calculatorWindow;
     int colorIndex;

};

#endif // RECENTCAL_H
