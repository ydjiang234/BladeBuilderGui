#ifndef MANAGER1_H
#define MANAGER1_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListView>

#include "mainsection.h"
#include "button1.h"
#include "label1.h"

class Manager1 : public MainSection
{
    Q_OBJECT
public:
    explicit Manager1(QString text, QWidget *parent = nullptr);
    QHBoxLayout *hb = new QHBoxLayout();
    QVBoxLayout *vbls = new QVBoxLayout();
    QListView *ls = new QListView();



signals:

public slots:
};

#endif // MANAGER1_H
