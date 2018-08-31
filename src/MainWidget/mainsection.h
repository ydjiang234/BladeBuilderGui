#ifndef MAINSECTION_H
#define MAINSECTION_H

#include <QWidget>
#include <QVBoxLayout>

class MainSection : public QWidget
{
    Q_OBJECT
public:
    explicit MainSection(QString text, QWidget *parent = nullptr);
    QVBoxLayout *vb = new QVBoxLayout(this);

signals:

public slots:
};

#endif // MAINSECTION_H
