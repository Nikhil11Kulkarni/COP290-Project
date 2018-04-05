#ifndef OP2WIN_H
#define OP2WIN_H

#include <QDialog>

namespace Ui {
class op2win;
}


class op2win : public QDialog
{
    Q_OBJECT

public:
    explicit op2win(QWidget *parent = 0);
    ~op2win();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::op2win *ui;
};

#endif // OP2WIN_H
