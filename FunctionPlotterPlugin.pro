#####################################################
#
# Customized Function Plotter Widget
# written in use of the Qt Framework
#
# FunctionPlotterPlugin.pro for compilation of
# a qt-designer plugin
#
# Date:    10.01.2014
# Author:  Sven Sperner
# eMail:   cethss@gmail.com
#
# Original version comes from
# "C++ GUI Programming with Qt 4, 2nd Edition"
#  by Jasmin Blanchette & Mark Summerfield
#
# Copyright (c) All rights reserved
#
#####################################################


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += desginer plugin

TARGET = FunctionPlotter
TARGET = $$qtLibraryTarget($$TARGET)
TEMPLATE = lib

CONFIG += release

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target

RESOURCES = plotter.qrc \
    plotter.qrc

SOURCES += main.cpp\
        plotter.cpp

HEADERS  += plotter.h

FORMS    += plotter.ui

