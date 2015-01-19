/*****************************************************
 *
 * Customized Function Plotter Widget
 * written in use of the Qt Framework
 *
 * plotterplugin.h
 *
 * Date:    10.01.2014
 * Author:  Sven Sperner
 * eMail:   cethss@gmail.com
 *
 * Original version comes from
 * "C++ GUI Programming with Qt 4, 2nd Edition"
 *  by Jasmin Blanchette & Mark Summerfield
 *
 * Copyright (c) All rights reserved
 *
 * ***************************************************/


#ifndef PLOTTERPLUGIN_H
#define PLOTTERPLUGIN_H

#include <QDesignerCustomWidgetInterface>

class PlotterPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")
#endif // QT_VERSION >= 0x050000

public:
    PlotterPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool m_initialized;
};

#endif
