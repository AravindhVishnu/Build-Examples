#pragma once

class MyStaticLibClass
{
public:
    MyStaticLibClass();
    ~MyStaticLibClass();

    void enterValue();
    float getValue();

private:

    float _value;

};