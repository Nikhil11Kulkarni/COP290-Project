#include "opm1win2.h"
#include "ui_opm1win2.h"

opm1win2::opm1win2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opm1win2)
{
    ui->setupUi(this);
}

opm1win2::~opm1win2()
{
    delete ui;
}
