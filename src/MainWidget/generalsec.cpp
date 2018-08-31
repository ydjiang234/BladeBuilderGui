#include "generalsec.h"

GeneralSec::GeneralSec(std::vector<std::string> regNames, Eigen::ArrayXi webInd, QWidget *parent) : MainSection("General Parameters", parent)
{
    this->regNames = regNames;
    this->webInd = webInd;
    this->webNum = webInd.rows();
    this->regNum = regNames.size();
}
