#-------------------------------------------------
#
# Project created by QtCreator 2013-06-08T22:54:05
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Observer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    subjectimplementation.cpp \
    observerimplementation.cpp

HEADERS += \
    observer.h \
    subject.h \
    subjectimplementation.h \
    observerimplementation.h
