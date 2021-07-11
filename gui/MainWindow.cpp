#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    setFixedSize(500, 500);
    inputWidget = new InputWidget(this);
}