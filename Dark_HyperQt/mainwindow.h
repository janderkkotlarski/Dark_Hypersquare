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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void push_key();

signals:
    void do_it_now();

private slots:
    void mousePressEvent(QMouseEvent * m);
    void keyPressEvent(QKeyEvent *);
    void OnMousePressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
