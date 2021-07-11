#include "AngkaInputWidget.h"

AngkaInputWidget::AngkaInputWidget(QString label, QWidget *parent) : QWidget(parent) {

    this->label = new QLabel(label);
    this->lineEdit = new QLineEdit();
    this->layout = new QHBoxLayout();

    setLayout(this->layout);

    layout->addWidget(this->label);
    layout->addWidget(this->lineEdit);

}