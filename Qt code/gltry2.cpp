#include "gltry2.h"
#include "ui_gltry2.h"

gltry2::gltry2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gltry2)
{
    ui->setupUi(this);
}

gltry2::~gltry2()
{
    delete ui;
}
