#include "op2win2.h"
#include "ui_op2win2.h"
#include "header1.h"

op2win2::op2win2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::op2win2)
{
    ui->setupUi(this);
}

op2win2::~op2win2()
{
    delete ui;
}


void op2win2::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //painter.drawLine(32,100,84,2);

    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            if(arredge[i][j]==1)
            painter.drawLine(inp33.arr3d[i].getx(),inp33.arr3d[i].getz(),inp33.arr3d[j].getx(),inp33.arr3d[j].getz());

        }
    }
}


