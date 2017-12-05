#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(
            this,
            SIGNAL(go_up()),
            this,
            SLOT(DialUp())
            );
    connect(
            this,
            SIGNAL(go_down()),
            this,
            SLOT(DialDown())
            );
    connect(
            this,
            SIGNAL(go_left()),
            this,
            SLOT(DialMin())
            );
    connect(
            this,
            SIGNAL(go_right()),
            this,
            SLOT(DialMax())
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent * m)
{
   emit go_up();
}

void MainWindow::keyPressEvent(QKeyEvent * e)
{
  switch (e->key())
  {
    case Qt::Key_Escape:
      this->close();
      break;
    case Qt::Key_W:
      emit go_up();
      break;
    case Qt::Key_S:
      emit go_down();
      break;
    case Qt::Key_A:
      emit go_left();
      break;
    case Qt::Key_D:
      emit go_right();
      break;
  }
}

void MainWindow::DialUp()
{ ui->dial->setValue(ui->dial->value() + 1); }

void MainWindow::DialDown()
{ ui->dial->setValue(ui->dial->value() - 1); }

void MainWindow::DialMin()
{ ui->dial->setValue(ui->dial->minimum()); }

void MainWindow::DialMax()
{ ui->dial->setValue(ui->dial->maximum()); }

