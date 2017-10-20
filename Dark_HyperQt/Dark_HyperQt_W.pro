#-------------------------------------------------
#
# Project created by QtCreator 2017-10-19T18:31:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dark_HyperQt
TEMPLATE = app

# C++14

# QMAKE_CXX = g++-6
# QMAKE_LINK = g++-6
# QMAKE_CC = gcc-6

CONFIG += c++14
QMAKE_CXXFLAGS += -std=c++14

# High warnings levels
# -Werror
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++

# Allow debug and release mode
CONFIG += debug_and_release

# In release mode, turn on profiling
CONFIG(release, debug|release) {

  DEFINES += NDEBUG

  # gprof
  QMAKE_CXXFLAGS += -pg
  QMAKE_LFLAGS += -pg
}


# SFML
INCLUDEPATH += D:\SFML-2.4.0\include

LIBS += -LD:/SFML-2.4.0/lib
LIBS += -LD:\SFML-2.4.0\bin
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio


SOURCES += main.cpp\
        mainwindow.cpp \
    controls.cpp \
    starting.cpp \
    textout.cpp \
    wektor.cpp \
    enum_classes.cpp \
    fibran.cpp \
    functions.cpp \
    game.cpp \
    hyperlevel.cpp \
    hyperplayer.cpp \
    hypersquare.cpp \
    madrix.cpp

HEADERS  += mainwindow.h \
    controls.h \
    prng.h \
    start.h \
    starting.h \
    textout.h \
    typeselect.h \
    wektor.h \
    enum_classes.h \
    fibran.h \
    functions.h \
    game.h \
    hyperlevel.h \
    hyperplayer.h \
    hypersquare.h \
    madrix.h

FORMS    += mainwindow.ui
