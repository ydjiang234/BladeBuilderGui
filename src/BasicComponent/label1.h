#ifndef LABEL1_H
#define LABEL1_H

#include <QWidget>
#include <QLabel>

class Label1 : public QLabel
{
    Q_OBJECT
public:
    explicit Label1(QString text, QWidget *parent = nullptr);

signals:

public slots:
};

#endif // LABEL1_H
