#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>

#include "button1.h"
#include "label1.h"
#include "mainsection.h"
#include "generalsec.h"
#include <vector>
#include <Dense>
#include "manager2.h"
#include "patternmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *w = new QWidget();

    Button1 *btn = new Button1("test");
    Label1 *lb = new Label1("test");
    PatternManager *man = new PatternManager();



    QVBoxLayout *vb = new QVBoxLayout(w);
    vb->addWidget(man);

    w->show();
    return a.exec();
}
