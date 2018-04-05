#include "mainwindow.h"
#include "header1.h"
#include "ui_mainwindow.h"
#include "secondwin.h"
#include "op2win.h"
#include <iostream>
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



//-----------------------------------------



//int opmode;

void MainWindow::on_pushButton_clicked()
{

    opmode = 1;
    //std::cout<<"here in func     "<<opmode<<std::endl;

    std::string l = "vertex2d.txt";


    screen2Dfigure topinp , frontinp ,sideinp;
            input2D leinput1,leinput2 ,leinput3  ;
            screen3Dfigure output3D;

    //TOPVERTX
            leinput1.take2DInputVertices(&l);
            //argnum++;
    //TOPEDGE
            //leinput1.takeInputEdges(argv,argnum);
            //argnum++ ;
        // memcpy(topinp.p2, leinput1.arr2d , sizeof(leinput1.arr2d));
        // memcpy(topinp.adjacency_matrix2d,leinput1.arr2dedge , sizeof(leinput1.arr2dedge));

    //FRONTVERTX
//            leinput2.take2DInputVertices(argv,argnum);
//            argnum++;
    //FRONTEDGE
//            leinput2.takeInputEdges(argv,argnum);
//            argnum++ ;
//         memcpy(frontinp.p2, leinput2.arr2d , sizeof(leinput2.arr2d));
//         memcpy(frontinp.adjacency_matrix2d,leinput2.arr2dedge , sizeof(leinput2.arr2dedge));

//    output3D= de3dfrom2d(topinp,frontinp);


//            ofstream myver3dfile;
//            myver3dfile.open ("out3dedge.txt");

//    int num=sizeof(output3D.p3);
//      for(int i=0;i<8;i++){
//            for(int j=0;j<8;j++){
//                if(myver3dfile.is_open()){myver3dfile<<output3D.adjacency_matrix[i][j] <<" ";}
//            }
//        myver3dfile << endl;
//        }
//      myver3dfile.close();


//    ofstream my3dver;
//      my3dver.open ("out3dvertex.txt");

//      for(int i=0;i<8;i++){
//                if(my3dver.is_open()){my3dver<< output3D.p3[i].getx() <<" "<<output3D.p3[i].gety()<<" "<<output3D.p3[i].getz()<<" ";}
//        my3dver << endl;
//        }

//      my3dver.close();


        std::cout<< leinput1.arr2d[0].getx()<<std::endl;


        secondwin op1second ;
        op1second.setModal(true);
        op1second.exec();


        }











void MainWindow::on_pushButton_2_clicked()
{
//    QString filename = QFileDialog::getOpenFileName(
//                   this, tr("Open File"), "C:\\Users","Text File(*.txt);;All files(*.*);;"
//                   );
//       //std::cout << filename.toStdString() << std::endl;



    //following is for opening new window:--

    op2win opsecond ;
    opsecond.setModal(true);
    opsecond.exec();


}
