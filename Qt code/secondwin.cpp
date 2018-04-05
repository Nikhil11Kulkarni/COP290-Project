#include "secondwin.h"
#include "ui_secondwin.h"
#include "header1.h"
#include <QFileDialog.h>
#include <opm1win2.h>
#include <iostream>
#include "openglwidget.h"
#include <QApplication>
//#include "gltry1.h"
#include "gltry2.h"
//hey

//hey
int topnum,frontnum,sidenum;
screen3Dfigure output3D;

input2D leinput1,leinput2,leinput3 ;

secondwin::secondwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwin)
{
    ui->setupUi(this);
}

secondwin::~secondwin()
{
    delete ui;
}


void secondwin::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();

/*    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users\\Pushpam Anand\\Downloads","Text File(*.txt);;All files(*.*);;"
                      );
   // std::string l = "vertex3d.txt";
std::string l = filename.toLocal8Bit().constData();v

*/
//TOPVERTX
    leinput1.take2DInputVertices(&l);

        std::cout<<"piio "<<leinput1.arr2d[0].getx() << std::endl;
    //topnum=leinput1.checknuma(&l);

}

void secondwin::on_pushButton_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();


//topedge
    std::cout<<"b44 "<<leinput1.arr2d[0].getx() << std::endl;

    leinput1.takeInputEdges(&l);
    std::cout<<"aft444 "<<leinput1.arr2d[0].getx() << std::endl;

    std::cout<<"leinput "<<leinput1.arr2dedge[0][0] <<std::endl;
}

void secondwin::on_pushButton_3_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();


//FRONTVERTX
    leinput2.take2DInputVertices(&l);
    frontnum=leinput2.checknuma(&l);

}

void secondwin::on_pushButton_4_clicked()
{


        screen2Dfigure topinp , frontinp ,sideinp;
        std::cout<<"yau "<<leinput1.arr2d[0].getx() << std::endl;

        memcpy(topinp.p2, leinput1.arr2d , sizeof(leinput1.arr2d));
            memcpy(topinp.adjacency_matrix2d,leinput1.arr2dedge , sizeof(leinput1.arr2dedge));

        std::cout<<"pau "<<topinp.p2[0].getx() << std::endl;


    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();
    std::cout<<"topver2222"<<std::endl;


//FRONTEDGE
    leinput2.takeInputEdges(&l);



    screen3Dfigure output3D;
        memcpy(frontinp.p2, leinput2.arr2d , sizeof(leinput2.arr2d));
            memcpy(frontinp.adjacency_matrix2d,leinput2.arr2dedge , sizeof(leinput2.arr2dedge));
            std::cout<<"topver4444"<<std::endl;

//side vaali cheeze
            topinp.numa = topnum;
            sideinp.numa = sidenum;
            frontinp.numa = frontnum;

 //sIdEEDGE

      memcpy(sideinp.p2, leinput3.arr2d , sizeof(leinput3.arr2d));
      memcpy(sideinp.adjacency_matrix2d , leinput3.arr2dedge , sizeof(leinput3.arr2dedge));

                std::cout<<"numtopppa "<<topnum <<std::endl;
      std::cout<< "topinpnuma- "<<frontinp.numa<<std::endl;
      std::cout<<"topver.p2[0].getx- "<< topinp.p2[0].getx()<<std::endl;


            output3D= de3dfrom2d(topinp,frontinp,sideinp);

//PRINT 3D VERTICES BY OPENGL HERE


}

//void secondwin::on_pushButton_5_clicked()
//{
//    opm1win2 opm1win22;
//    opm1win22.setModal(true);
//    opm1win22.exec();
//}

void secondwin::on_pushButton_5_clicked()
{
//    QApplication a();
//    OpenWidget ow;
//    ow.setTitle("3D isometric view");
//    ow.resize(640,640);
//    ow.show();
//    a.exec();

//    int main(int argc, char *argv[])
//    {
//        QApplication a(argc, argv);
//        MainWindow w;
//        w.setTitle("mera window");
//        w.resize(640,480);

//        w.show();

//        return a.exec();
//    }




        gltry1 push1;
        push1.setModal(true);
        push1.exec();

}

void secondwin::on_pushButton_6_clicked()
{
    gltry2 push2;
    push2.setModal(true);
    push2.exec();
}

void secondwin::on_pushButton_7_clicked()//take input side vertex
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();


//sidevertex
    leinput3.take2DInputVertices(&l);
        sidenum=leinput3.checknuma(&l);
}

void secondwin::on_pushButton_8_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                      this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
                      );
    std::string l = filename.toLocal8Bit().constData();


//sideedges
    leinput3.takeInputEdges(&l);
              std::cout<<"leinput3 "<<leinput3.arr2dedge[1][1] <<std::endl;
}
