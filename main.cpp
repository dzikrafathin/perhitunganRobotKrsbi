#include <iostream>
#include "kinematikaBalik/KinematikaBalik.h"
#include "gui/MainWindow.h"
#include <qt5/QtWidgets/QApplication>

using namespace std;

KinematikaBalik kinematikaBalik(3, 0.05, 0.2);

int main(int argc, char **argv) {

  //cout << kinematikaBalik.hitungKecepatanMotor(0.0, 0.5, 0.0, 0.523599) << endl;

  QApplication app(argc, argv);

  MainWindow mainWindow;
  mainWindow.show();

  return app.exec();

}