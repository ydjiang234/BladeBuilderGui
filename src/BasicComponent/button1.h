#ifndef BUTTON1_H
#define BUTTON1_H

#include <QWidget>
#include <QPushButton>

class Button1 : public QPushButton
{
    Q_OBJECT
public:
    explicit Button1(QString test, QWidget *parent = nullptr);

signals:

public slots:
};

#endif // BUTTON1_H
