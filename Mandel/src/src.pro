#-------------------------------------------------
#
# Project created by QtCreator 2010-12-02T17:38:10
#
#-------------------------------------------------

QT       += core gui

TARGET = ../Mandel
TEMPLATE = app

SOURCES += main.cpp\
        mandelmainw.cpp \
    fractalset.cpp \
    fsize.cpp \
    fdomain.cpp \
    fractalevaluatorabstract.cpp \
    mandelbrotsetevaluator.cpp \
    fmatrix.cpp \
    fabstractscheduler.cpp \
    fthread.cpp \
    flinescheduler.cpp \
    fpainter.cpp

HEADERS  += mandelmainw.h \
    fractalset.h \
    fsize.h \
    fdomain.h \
    fractalevaluatorabstract.h \
    mandelbrotsetevaluator.h \
    fcomplex.h \
    findex.h \
    fmatrix.h \
    fabstractscheduler.h \
    fthread.h \
    flinescheduler.h \
    fpainter.h

FORMS    += mandelmainw.ui
