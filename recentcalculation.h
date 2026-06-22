#ifndef RECENTCALCULATION_H
#define RECENTCALCULATION_H

#include <QDialog>

namespace Ui {
class recentcalculation;
}

class recentcalculation : public QDialog
{
    Q_OBJECT

public:
    explicit recentcalculation(QWidget *parent = nullptr);
    ~recentcalculation();

private:
    Ui::recentcalculation *ui;
};

#endif // RECENTCALCULATION_H
