#include "manager2.h"

Manager2::Manager2(QString text, QWidget *parent) : Manager1(text, parent)
{
    this->vbls->addLayout(this->hbbt);
    this->hbbt->addWidget(this->btAdd);
    this->hbbt->addWidget(this->btDel);
}
