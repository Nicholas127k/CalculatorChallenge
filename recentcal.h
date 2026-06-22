#ifndef RECENTCAL_H
#define RECENTCAL_H

#include <QWidget>

namespace Ui {
class recentcal;
}

class recentcal : public QWidget
{
    Q_OBJECT

public:
    explicit recentcal(QWidget *parent = nullptr);
    ~recentcal();

private slots:
    void on_pushButton_menu_3_clicked();

    void on_pushButton_menu_2_clicked();

    void on_pushButton_calculator_clicked();

    void on_pushButton_recent_clicked();

    void on_pushButton_favorite_clicked();

private:
    Ui::recentcal *ui;
};

#endif // RECENTCAL_H
