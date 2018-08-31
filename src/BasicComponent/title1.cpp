#include "title1.h"


Title1::Title1(QString text, QWidget *parent) : QLabel(parent)
{
    this->setText(text);
}
