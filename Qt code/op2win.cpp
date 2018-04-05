#include "op2win.h"
#include "ui_op2win.h"
#include "header1.h"
#include <QFileDialog.h>
#include <iostream>
#include <op2win2.h>


op2win::op2win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::op2win)
{
    ui->setupUi(this);
}

op2win::~op2win()
{
    delete ui;
}

input3D inp33 ;

void op2win::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users\\Pushpam Anand\\Downloads","Text File(*.txt);;All files(*.*);;"
                      );
   // std::string l = "vertex3d.txt";
std::string l = filename.toLocal8Bit().constData();
     inp33.take3DInputVertices(&l) ; //"vertices.txt"
     std::cout<<inp33.arr3d[0].getx()<<std::endl;

}

void op2win::on_pushButton_2_clicked()
{
         std::cout<<"b44"<<inp33.arr3d[0].getx()<<std::endl;
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users\\Pushpam Anand\\Downloads","Text File(*.txt);;All files(*.*);;"
                      );
    // std::string l = "edege3d.txt";

 std::string l = filename.toLocal8Bit().constData();

 inp33.takeInputEdges(&l);  //"edges.txt"


 screen2Dfigure sc1,sc2 ;
 screen3Dfigure sc3d ;
memcpy(sc3d.p3, inp33.arr3d , sizeof(inp33.arr3d));
memcpy(sc3d.adjacency_matrix, arredge , sizeof(arredge));

 topfrontview finans ;
 finans= sc3d.convert3DtoTopView();
 sc1=finans.top;
 sc2=finans.front ;

 for(int h=0;h<=8;h++){
     std::cout<<sc1.p2[h].getx()<<" "<<sc1.p2[h].gety()<<std::endl;
 }

//PRINT HERE THIS TOP AND FRONT VIEWS MAY BE IN NEW WINDOW

}

void op2win::on_pushButton_3_clicked()
{
    op2win2 op2win22;
    op2win22.setModal(true);
    op2win22.exec();
}
