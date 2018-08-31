#include "manager1.h"

Manager1::Manager1(QString text, QWidget *parent) : MainSection(text, parent)
{
    this->vb->addLayout(this->hb);
    this->hb->addLayout(this->vbls);
    this->vbls->addWidget(this->ls);
}
