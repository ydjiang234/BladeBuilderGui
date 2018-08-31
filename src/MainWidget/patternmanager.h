#ifndef PATTERNMANAGER_H
#define PATTERNMANAGER_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTableWidget>

#include "manager2.h"

class PatternManager : public Manager2
{
    Q_OBJECT
public:
    explicit PatternManager(QWidget *parent = nullptr);
    QTableWidget *table = new QTableWidget();


signals:

public slots:
};

#endif // PATTERNMANAGER_H
