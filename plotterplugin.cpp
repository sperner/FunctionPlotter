#include "plotter.h"
#include "plotterplugin.h"

#include <QtPlugin>

PlotterPlugin::PlotterPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PlotterPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool PlotterPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PlotterPlugin::createWidget(QWidget *parent)
{
    return new Plotter(parent);
}

QString PlotterPlugin::name() const
{
    return QLatin1String("Plotter");
}

QString PlotterPlugin::group() const
{
    return QLatin1String("Math");
}

QIcon PlotterPlugin::icon() const
{
    return QIcon();
}

QString PlotterPlugin::toolTip() const
{
    return QLatin1String("FunctionPlotter");
}

QString PlotterPlugin::whatsThis() const
{
    return QLatin1String("A plotter for drawing mathematical functions");
}

bool PlotterPlugin::isContainer() const
{
    return false;
}

QString PlotterPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Plotter\" name=\"plotter\">\n</widget>\n");
}

QString PlotterPlugin::includeFile() const
{
    return QLatin1String("plotter.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(plotterplugin, PlotterPlugin)
#endif // QT_VERSION < 0x050000
