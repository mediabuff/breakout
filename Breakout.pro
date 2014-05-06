#-------------------------------------------------
#
# Project created by QtCreator 2014-03-24T15:23:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Breakout
TEMPLATE = app


SOURCES += main.cpp \
    paddle.cpp \
    brick.cpp \
    ball.cpp \
    breakout.cpp

HEADERS  += paddle.h \
    brick.h \
    ball.h \
    breakout.h

RESOURCES += \
    BreakoutRes.qrc
