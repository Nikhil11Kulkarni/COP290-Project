#include "op1third.h"
#include "ui_op1third.h"
#include <qopengl.h>
#include <qopenglfunctions.h>
#include <qopenglfunctions_1_0.h>
#include <qopenglextrafunctions.h>


op1third::op1third(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::op1third)
{
    ui->setupUi(this);

    setSurfaceType(QWindow::OpenGLSurface) ;

    QSurfaceFormat format ;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2,1);
    setFormat(format);

    context = new QOpenGLContext ;
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);

    OpenGLFunctions= context->functions();



}

op1third::~op1third()
{
    delete ui;
}



void op1third::initializeGL()
{

   // glEnable(GL_DEPTH_TEST) ;
   // resizeGL(this->width(),this->height());

}

void op1third::resizeGL(int w, int h)
{
glViewport(0,0,w,h);
qreal aspectratio =qreal(w)/qreal(h);

}

void op1third::paintGL()
{

  glClearColor(0.39f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



   glBegin(GL_POLYGON);
          glVertex3f(.1,0,0);
          glVertex3f(.1,.1,0);
          glVertex3f(0,.1,.1);
          glVertex3f(0,0,.1);

   glEnd();



   glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex3f(.0,.0,.0);
        glVertex3f(.0,.7,.5);
     glEnd();

     glBegin(GL_LINES);
          glColor3f(0.0f,1.0f,0.0f);
                 glVertex3f(.0,.0,.0);
                 glVertex3f(.0,.5,.0);
       glEnd();

       glBegin(GL_LINES);
            glColor3f(0.0f,0.0f,1.0f);
                   glVertex3f(.0,.0,.0);
                   glVertex3f(.5,.0,.0);
         glEnd();



   glBegin(GL_POLYGON);
          glVertex3f(.2,.2,0);
          glVertex3f(.3,.2,0);
          glVertex3f(.3,.3,0);
          glVertex3f(.2,.3,0);

   glEnd();

   glBegin(GL_POLYGON);
          glVertex3f(0,.2,.2);
          glVertex3f(0,.3,.2);
          glVertex3f(0,.3,.3);
          glVertex3f(0,.2,.3);

   glEnd();




   glFlush();



}

void op1third::resizeEvent(QResizeEvent *event)
{

}

void op1third::paintEvent(QPaintEvent *event)
{
    paintGL();



}






//-----------------------------------------------------------------------------

