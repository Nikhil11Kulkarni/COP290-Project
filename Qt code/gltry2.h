#ifndef GLTRY2_H
#define GLTRY2_H

#include <QDialog>

namespace Ui {
class gltry2;
}

class gltry2 : public QDialog
{
    Q_OBJECT

public:
    explicit gltry2(QWidget *parent = 0);
    ~gltry2();

private:
    Ui::gltry2 *ui;
};

#endif // GLTRY2_H
