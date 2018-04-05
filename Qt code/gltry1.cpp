#include "gltry1.h"
#include "ui_gltry1.h"
#include "openglwidget.h"
#include "header1.h"
#include "secondwin.h"
#include <iostream>

gltry1::gltry1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gltry1)
{
    ui->setupUi(this);
}

gltry1::~gltry1()
{
    delete ui;
}


//void openGLWidget::paintGL2()
//{

//  glClearColor(0.39f, 0.0f, 0.0f, 1.0f);
//   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


//   glBegin(GL_POLYGON);
//          glVertex3f(.1,0,0);
//          glVertex3f(.1,.1,0);
//          glVertex3f(0,.1,.1);
//          glVertex3f(0,0,.1);

//   glEnd();



//   glBegin(GL_LINES);
//        glColor3f(1.0f,1.0f,0.0f);
//        glVertex3f(.0,.0,.0);
//        glVertex3f(.0,.7,.5);
//     glEnd();

//     glBegin(GL_LINES);
//          glColor3f(0.0f,1.0f,0.0f);
//                 glVertex3f(.0,.0,.0);
//                 glVertex3f(.0,.5,.0);
//       glEnd();

//       glBegin(GL_LINES);
//            glColor3f(0.0f,0.0f,1.0f);
//                   glVertex3f(.0,.0,.0);
//                   glVertex3f(.5,.0,.0);
//         glEnd();



//   glBegin(GL_POLYGON);
//          glVertex3f(.2,.2,0);
//          glVertex3f(.3,.2,0);
//          glVertex3f(.3,.3,0);
//          glVertex3f(.2,.3,0);

//   glEnd();

//   glBegin(GL_POLYGON);
//          glVertex3f(0,.2,.2);
//          glVertex3f(0,.3,.2);
//          glVertex3f(0,.3,.3);
//          glVertex3f(0,.2,.3);

//   glEnd();



//   glFlush();


//}










void gltry1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(32,100,84,2);

    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            if(output3D.adjacency_matrix[i][j]==1)
            painter.drawLine(output3D.p3[i].getx(),output3D.p3[i].gety(),output3D.p3[j].getx(),output3D.p3[j].gety());

        }
    }

     std::cout<< output3D.adjacency_matrix[0][0]<<std::endl;
     std::cout<< output3D.p3[0].getx()<<std::endl;


}










