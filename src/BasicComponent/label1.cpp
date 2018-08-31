#include "label1.h"

Label1::Label1(QString text, QWidget *parent) : QLabel(parent)
{
    this->setText(text);
}
