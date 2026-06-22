#ifndef FAVORITEDCALCULATION_H
#define FAVORITEDCALCULATION_H

#include <QDialog>

namespace Ui {
class favoritedcalculation;
}

class favoritedcalculation : public QDialog
{
    Q_OBJECT

public:
    explicit favoritedcalculation(QWidget *parent = nullptr);
    ~favoritedcalculation();

private:
    Ui::favoritedcalculation *ui;
};

#endif // FAVORITEDCALCULATION_H
