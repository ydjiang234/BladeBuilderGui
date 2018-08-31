#ifndef GENERALSEC_H
#define GENERALSEC_H

#include <QWidget>
#include <Dense>
#include <vector>
#include "mainsection.h"

class GeneralSec : public MainSection
{
    Q_OBJECT
public:
    explicit GeneralSec(std::vector<std::string> regNames, Eigen::ArrayXi webInd, QWidget *parent = nullptr);
    std::vector<std::string> regNames;
    Eigen::ArrayXi webInd;
    int webNum, regNum;


signals:

public slots:
};

#endif // GENERALSEC_H
