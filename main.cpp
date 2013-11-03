/**
* @file
*
*
*/

/** \file file.h
 *  \brief A brief file description.
 * A more elaborated file description.
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
