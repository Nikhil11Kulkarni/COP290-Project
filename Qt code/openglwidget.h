#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QopenGLWidget>
#include<QOpenGLWindow>
#include<QSurfaceFormat>
#include<QOpenGLFunctions>
#include<QtOpenGL>
#include<GL/GLU.h>
#include "gltry1.h"

class openGLWidget : public QWidget
{
    Q_OBJECT

public:
    openGLWidget(QWidget *parent = 0);
    ~openGLWidget();

protected:
 virtual void initializeGL();
 virtual void resizeGL(int w, int h) ;
 virtual void paintGL();
     virtual void paintGL2();
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);

//public slots:
   // void UpdateAnimation();

private:
   QOpenGLContext *context ;
   QOpenGLFunctions *OpenGLFunctions ;
float rotation ;

};

#endif  OPENGLWIDGET_H
