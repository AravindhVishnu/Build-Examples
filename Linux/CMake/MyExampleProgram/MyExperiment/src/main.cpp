#include <iostream>
#include "../inc/MyExperiment.h"

int main()
{
    MyExperiment expObj;

    int32_t input = 0;

    while (input != 10)
    {
        input = expObj.getInput();
        expObj.doOperations();
        expObj.printResult();
    }

    std::cout << "The input value is equal to ten so the program ends";

    return 0;
}