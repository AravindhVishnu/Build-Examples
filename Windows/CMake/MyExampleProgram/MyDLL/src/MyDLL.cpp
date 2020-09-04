#include "../inc/MyDLL.h"
#include <stdio.h>
#include <cmath>

MyDLLClass::MyDLLClass()
{
    _value = 0.0f;
}

MyDLLClass::~MyDLLClass()
{

}

float MyDLLClass::add(float a, float b)
{
    _value = a + b;
    return _value;
}

float MyDLLClass::subtract(float a, float b)
{
    _value = a - b;
    return _value;
}

float MyDLLClass::multiply(float a, float b)
{
    _value = a * b;
    return _value;
}

float MyDLLClass::divide(float a, float b)
{
    _value = a / b;
    return _value;
}

void MyDLLClass::printResult()
{
    printf("Value is: %f", _value);
    printf("\n");
}