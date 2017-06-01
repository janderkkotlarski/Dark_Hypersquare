# Files
SOURCES += \
    dark_hypersquare_rewrite.cpp \
    main.cpp \
    hypersquare.cpp \
    functions.cpp

# C++14

QMAKE_CXX = g++-6
QMAKE_LINK = g++-6
QMAKE_CC = gcc-6

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

HEADERS += \
    Background_Blinker.h \
    Blinker.h \
    Clear_Maze_PRNG.h \
    Color_Picker.h \
    Colorize.h \
    Dark_Maze_PRNG.h \
    Exit_Multicolor.h \
    Fiboinit.h \
    Fiborand.h \
    Invis_Maze_PRNG.h \
    Invis_Walls_PRNG.h \
    Square_Draw.h \
    hypersquare.h \
    functions.h
