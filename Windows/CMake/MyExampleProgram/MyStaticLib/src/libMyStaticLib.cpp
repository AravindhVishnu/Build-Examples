#include "../inc/libMyStaticLib.h"
#include <iostream>
#include <string>
#include <cmath>

MyStaticLibClass::MyStaticLibClass()
{
    _value = 0.0f;
}

MyStaticLibClass::~MyStaticLibClass()
{

}

void MyStaticLibClass::enterValue()
{
    std::cout << "Enter a new value:\n";
    float input;
    std::cin >> input;
    _value = input;
}

float MyStaticLibClass::getValue()
{
    return _value;
}