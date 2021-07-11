#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <qt5/QtWidgets/QWidget>
#include "InputWidget/InputWidget.h"

class MainWindow : public QWidget
{
    Q_OBJECT

    private:
        InputWidget *inputWidget;

    public:
        explicit MainWindow(QWidget *parent = 0);

    signals:
    public slots:
};

#endif