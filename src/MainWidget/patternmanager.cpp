#include "patternmanager.h"

PatternManager::PatternManager(QWidget *parent) : Manager2("Pattern Manager", parent)
{
    this->hb->addWidget(this->table);
    this->table->setColumnCount(4);
    QStringList headerLabels;
    headerLabels << "Material" << "Thickness" << "Angle" << "Int Point #";
    this->table->setHorizontalHeaderLabels(headerLabels);
}
