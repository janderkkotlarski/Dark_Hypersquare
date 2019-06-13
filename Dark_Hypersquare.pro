# Files
SOURCES += \
    charamaze.cpp \
    color_type.cpp \
    dark_hypermain.cpp \
    dhs_functions.cpp \
    game.cpp \
    hypermaze.cpp \
    hypersquare.cpp \
    int_2d.cpp \
    resources.cpp \
    square_type.cpp \
    start.cpp

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
INCLUDEPATH += C:\Qt\sfml\include

LIBS += -LC:/Qt/sfml/lib
LIBS += -LC:\Qt\sfml\bin
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

HEADERS += \
    charamaze.h \
    color_type.h \
    dhs_functions.h \
    game.h \
    hypermaze.h \
    hypersquare.h \
    int_2d.h \
    resources.h \
    square_type.h \
    start.h
