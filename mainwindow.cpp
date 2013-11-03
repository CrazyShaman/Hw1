/**
* @file
* @author Chris Tobias
* @version 1.0
*
*
*/

/**
/file mainwindow.cpp
Contains the definitions of the 3 push buttons
*/



#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*! \brief Push button to start the game.
 *
 *  Inherits for MainWindow from Qt
 */
void MainWindow::on_pushButton_clicked()
{
    std::cout << "Starting game... " << std::endl;
}

/*!
 * \brief MainWindow::on_pushButton_2_clicked
 *  This is a brief comment that ends after period and a space or newline.
 *
 *  This section is for more descriptive commenting
 */

void MainWindow::on_pushButton_2_clicked()
{
 cout << "Options" << endl;
}

void MainWindow::on_pushButton_3_clicked()
{
            std::cout << "Exiting" << endl; //!< this is an inline comment for doxygen
}
