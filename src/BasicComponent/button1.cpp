#include "button1.h"

Button1::Button1(QString text, QWidget *parent) : QPushButton(parent)
{
    this->setText(text);
}

