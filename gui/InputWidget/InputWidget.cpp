#include "InputWidget.h"

InputWidget::InputWidget(QWidget *parent) : QWidget(parent) {
    layout = new QBoxLayout(QBoxLayout::TopToBottom);
    inputXDot = new AngkaInputWidget("Nilai X dot");
    inputYDot = new AngkaInputWidget("Nilai Y dot");
    inputTDot = new AngkaInputWidget("Nilai T dot");

    setLayout(layout);

    layout->addWidget(inputXDot);
    layout->addWidget(inputYDot);
    layout->addWidget(inputTDot);
}