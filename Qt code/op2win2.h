#ifndef OP2WIN2_H
#define OP2WIN2_H

#include <QtGui>
#include <QtCore>
#include <QDialog>

namespace Ui {
class op2win2;
}

class op2win2 : public QDialog
{
    Q_OBJECT

public:
    explicit op2win2(QWidget *parent = 0);
    ~op2win2();

protected:
   void paintEvent(QPaintEvent *);

private:
    Ui::op2win2 *ui;
};

#endif // OP2WIN2_H
