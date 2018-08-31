#include "mainsection.h"
#include "title1.h"

MainSection::MainSection(QString text, QWidget *parent) : QWidget(parent)
{
    Title1 *title = new Title1(text);
    this->vb->addWidget(title);
}
