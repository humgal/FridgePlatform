#-------------------------------------------------
#
# Project created by QtCreator 2017-02-16T17:22:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FridgePlatform
TEMPLATE = app


SOURCES += main.cpp\
        slidenavigationapp.cpp

HEADERS  += slidenavigationapp.h

FORMS    += slidenavigationapp.ui

INCLUDEPATH += ../SlideNavigation

CONFIG += release
MOC_DIR = temp/moc
RCC_DIR = temp/rcc
UI_DIR = temp/ui
OBJECTS_DIR = temp/obj
DESTDIR = bin

include(./SlideNavigation/SlideNavigation.pri)
