#pragma once
#include <stdint.h>

#if defined(_WIN32) || defined(__WIN32__)
#ifdef COMPILING_DLL
#define MY_DLL_API __declspec(dllexport)
#else
#define MY_DLL_API __declspec(dllimport)      
#endif
#else
#define MY_DLL_API
#endif

class MY_DLL_API MyDLLClass
{
public:
    MyDLLClass();
    ~MyDLLClass();

    float add(float a, float b);
    float subtract(float a, float b);
    float multiply(float a, float b);
    float divide(float a, float b);
    void printResult();

private:
    float _value;
};
