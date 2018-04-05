#ifndef OPM1WIN2_H
#define OPM1WIN2_H

#include <QDialog>

namespace Ui {
class opm1win2;
}

class opm1win2 : public QDialog
{
    Q_OBJECT

public:
    explicit opm1win2(QWidget *parent = 0);
    ~opm1win2();

private:
    Ui::opm1win2 *ui;
};

#endif // OPM1WIN2_H
