#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int opmode;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_pushButton_clicked();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

extern int opmode;
#endif // MAINWINDOW_H
