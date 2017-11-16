#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(
            ui->horizontalSlider,
            SIGNAL(valueChanged(int)),
            ui->dial,
            SLOT(setValue(int))
            );

    connect(
            ui->pushButton,
            SIGNAL(clicked()),
            this,
            SLOT(OnMousePressed())
            );

    connect(
            this,
            SIGNAL(do_it_now()),
            this,
            SLOT(OnMousePressed())
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent * m)
{
  emit do_it_now();
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

void MainWindow::OnMousePressed()
{
  ui->dial->setValue(ui->dial->value() + 1);
}
