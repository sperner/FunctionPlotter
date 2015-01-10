CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(plotterplugin)
TEMPLATE    = lib

HEADERS     = plotterplugin.h
SOURCES     = plotterplugin.cpp
RESOURCES   = plotter.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(plotter.pri)
