#ifndef OP1WIN2_H
#define OP1WIN2_H

#include <QDialog>

namespace Ui {
class op1win2;
}

class op1win2 : public QDialog
{
    Q_OBJECT

public:
    explicit op1win2(QWidget *parent = 0);
    ~op1win2();

private:
    Ui::op1win2 *ui;
};

#endif // OP1WIN2_H
