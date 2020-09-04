#include "../inc/MyExperiment.h"

MyExperiment::MyExperiment()
{
}

MyExperiment::~MyExperiment()
{
}

int32_t MyExperiment::getInput()
{
    this->_libObj.enterValue();
    return static_cast<int32_t>(this->_libObj.getValue() + 0.5f);
}

void MyExperiment::doOperations()
{
    float offset = 5.0f;
    this->_dllObj.add(this->_libObj.getValue(), offset);
}

void MyExperiment::printResult()
{
    this->_dllObj.printResult();
}