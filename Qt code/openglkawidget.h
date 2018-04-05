#ifndef OPENGLKAWIDGET_H
#define OPENGLKAWIDGET_H

#include <QWidget>

namespace Ui {
class openglkawidget;
}

class openglkawidget : public QWidget
{
    Q_OBJECT

public:
    explicit openglkawidget(QWidget *parent = 0);
    ~openglkawidget();

private:
    Ui::openglkawidget *ui;
};

#endif // OPENGLKAWIDGET_H
