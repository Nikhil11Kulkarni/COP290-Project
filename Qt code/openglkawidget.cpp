#include "openglkawidget.h"
#include "ui_openglkawidget.h"

openglkawidget::openglkawidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::openglkawidget)
{
    ui->setupUi(this);
}

openglkawidget::~openglkawidget()
{
    delete ui;
}
