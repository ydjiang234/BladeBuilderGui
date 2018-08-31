#ifndef TITLE1_H
#define TITLE1_H

#include <QWidget>
#include <QLabel>

class Title1 : public QLabel
{
    Q_OBJECT
public:
    explicit Title1(QString text, QWidget *parent = nullptr);

signals:

public slots:
};

#endif // TITLE1_H
