/*****************************************************
 *
 * Customized Function Plotter Widget
 * written in use of the Qt Framework
 *
 * plotter.h
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


#ifndef PLOTTER_H
#define PLOTTER_H

#include <cmath>
#include <QMap>
#include <QMouseEvent>
#include <QPixmap>
#include <QStylePainter>
#include <QToolButton>
#include <QVector>
#include <QWidget>



class QToolButton;

class PlotSettings;

class Plotter : public QWidget
{
        Q_OBJECT

    public:
        Plotter(QWidget *parent = 0);
        void setPlotSettings(const PlotSettings &settings);
        void setCurveData(int id, const QVector<QPointF> &data);
        void clearCurve(int id);
        QSize minimumSizeHint() const;
        QSize sizeHint() const;

    public slots:
        void zoomIn();
        void zoomOut();

    protected:
        void paintEvent(QPaintEvent *event);
        void resizeEvent(QResizeEvent *event);
        void mousePressEvent(QMouseEvent *event);
        void mouseMoveEvent(QMouseEvent *event);
        void mouseReleaseEvent(QMouseEvent *event);
        void keyPressEvent(QKeyEvent *event);
        void wheelEvent(QWheelEvent *event);

    private:
        void updateRubberBandRegion();
        void refreshPixmap();
        void drawGrid(QPainter *painter);
        void drawCurves(QPainter *painter);

        enum { Margin = 50 };

        QToolButton *zoomInButton;
        QToolButton *zoomOutButton;
        QMap<int, QVector<QPointF> > curveMap;
        QVector<PlotSettings> zoomStack;
        int curZoom;
        bool rubberBandIsShown;
        QRect rubberBandRect;
        QPixmap pixmap;
};

class PlotSettings
{
    public:
        PlotSettings();

        void scroll(int dx, int dy);
        void adjust();
        double spanX() const { return maxX - minX; }
        double spanY() const { return maxY - minY; }

        double minX;
        double maxX;
        int numXTicks;
        double minY;
        double maxY;
        int numYTicks;
    private:
        static void adjustAxis(double &min, double &max, int &numTicks);
};

#endif

