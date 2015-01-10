/*****************************************************
 *
 * Customized Function Plotter Widget
 * written in use of the Qt Framework
 *
 * main.cpp
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


#include "plotter.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    Plotter window;
    window.show();

    return application.exec();
}
