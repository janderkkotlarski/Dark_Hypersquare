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

void MainWindow::update()
{
    emit go_right();
}

void MainWindow::DialUp()
{ ui->dial->move(ui->dial->x(), ui->dial->y() - 5); }

void MainWindow::DialDown()
{ ui->dial->move(ui->dial->x(), ui->dial->y() + 5); }

void MainWindow::DialMin()
{ ui->dial->move(ui->dial->x() - 5, ui->dial->y()); }

void MainWindow::DialMax()
{ ui->dial->move(ui->dial->x() + 5, ui->dial->y()); }


