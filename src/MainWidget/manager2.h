#ifndef MANAGER2_H
#define MANAGER2_H

#include <QWidget>

#include "button1.h"
#include "manager1.h"


class Manager2 : public Manager1
{
    Q_OBJECT
public:
    explicit Manager2(QString title, QWidget *parent = nullptr);
    QHBoxLayout *hbbt = new QHBoxLayout();
    Button1 *btAdd = new Button1("+");
    Button1 *btDel = new Button1("-");

signals:

public slots:
};

#endif // MANAGER2_H
