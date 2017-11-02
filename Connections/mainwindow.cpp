#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
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

void MainWindow::keyPressEvent(QKeyEvent * e)
{
  switch (e->key())
  {
    case Qt::Key_W:
      this->setWindowTitle("GELUKT");
      break;
    case Qt::Key_S:
      this->close();
      break;
  }
}

void MainWindow::keyReleaseEvent(QKeyEvent * e)
{
  switch (e->key())
  {
    case Qt::Key_W: this->setWindowTitle("los");
  }
}
