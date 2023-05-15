#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Numeric{
protected:
    double value;
public:
    Numeric():value(0){};
    Numeric(double v):value(v){};
    virtual void increase(int n);
    virtual void decrease(int n);
    virtual double module();
};