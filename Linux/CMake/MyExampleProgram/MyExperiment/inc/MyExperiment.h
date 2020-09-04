#pragma once
#include "../dll/inc/MyDLL.h"
#include "../lib/inc/libMyStaticLib.h"
#include <stdint.h>

class MyExperiment
{
public:
    MyExperiment();
    ~MyExperiment();

    int32_t getInput();
    void doOperations();
    void printResult();

private:
    MyDLLClass _dllObj;
    MyStaticLibClass _libObj;
};
