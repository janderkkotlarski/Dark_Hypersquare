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
    void go_up();
    void go_down();
    void go_left();
    void go_right();

private slots:
    void mousePressEvent(QMouseEvent * m);
    void keyPressEvent(QKeyEvent *);
    void DialUp();
    void DialDown();
    void DialMin();
    void DialMax();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
