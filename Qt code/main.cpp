#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "mainwindow.h"
#include <QTextStream>
#include <string>
#include <QDebug>


extern int opmode;

using namespace std;
int main(int argc, char *argv[])
{
   // int opmode;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    //int d=0;


//    int op = w.opmode;


//    std::cout<<op;

//    if (op==1){
//     std::cout << "yaad aa rha hai";
//    }


//    QVariant var(op);
//    QString stringValue = var.toString();
//   qDebug() << "String to print-1 :"+stringValue;


    return a.exec();
}
