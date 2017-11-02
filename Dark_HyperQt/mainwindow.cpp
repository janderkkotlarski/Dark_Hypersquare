#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(pressed()),
            ui->dial, SLOT(ui->dial->));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::push_key()
{

}
