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

TARGET = FunctionPlotter
TARGET = $$qtLibraryTarget($$TARGET)
target.path = $$[QT_INSTALL_PLUGINS]/designer

CONFIG += desginer plugin release thread warn_on

TEMPLATE  = lib

INSTALLS += target

SOURCES  += main.cpp plotter.cpp
HEADERS  += plotter.h
FORMS    += plotter.ui
RESOURCES = plotter.qrc
