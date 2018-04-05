#ifndef OP1THIRD_H
#define OP1THIRD_H

#include <QDialog>
#include <QMainWindow>
#include<QOpenGLWindow>
#include<QSurfaceFormat>
#include<QOpenGLFunctions>
#include<QtOpenGL>
#include<GL/GLU.h>


namespace Ui {
class op1third;
}

class op1third : public QDialog
{
    Q_OBJECT

public:
    explicit op1third(QWidget *parent = 0);
    ~op1third();

protected:
 virtual void initializeGL();
 virtual void resizeGL(int w, int h) ;
 virtual void paintGL();
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    Ui::op1third *ui;
    QOpenGLContext *context ;
    QOpenGLFunctions *OpenGLFunctions ;

float rotation ;


};

#endif // OP1THIRD_H
