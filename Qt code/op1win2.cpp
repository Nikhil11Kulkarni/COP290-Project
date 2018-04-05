#include "op1win2.h"
#include "ui_op1win2.h"

op1win2::op1win2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::op1win2)
{
    ui->setupUi(this);
}

op1win2::~op1win2()
{
    delete ui;
}








