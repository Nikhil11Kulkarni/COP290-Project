#ifndef GLTRY1_H
#define GLTRY1_H

#include <QDialog>

namespace Ui {
class gltry1;
}

class gltry1 : public QDialog
{
    Q_OBJECT

public:
    explicit gltry1(QWidget *parent = 0);
    ~gltry1();

protected:
   void paintEvent(QPaintEvent *);

private:
    Ui::gltry1 *ui;
};

#endif // GLTRY1_H
