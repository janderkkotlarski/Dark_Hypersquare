#include <cassert>

#include "starting.h"
#include "game.h"

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    game dark_hypersquare;

    dark_hypersquare.run();

    // return 0;

    QApplication app(argc, argv);
    MainWindow wind;
    wind.show();

    return app.exec();
}
