#pragma once
#include "Numeric.h"

class RationalNumber: public Numeric{
private:
    int nominator;
    int denominator;
public:
    RationalNumber(): Numeric(), nominator(0), denominator(0){};
    RationalNumber(int n, int d): Numeric(n), nominator(n), denominator(d){};
    void increase(int n) override;
    void decrease(int n) override;
    double module()override;
    double GetNumber(){return value;}
    void reduce();  //скорочення дробу
    static int getGCD(int a, int b);  //знаходження НСК
    friend ostream& operator<<(std::ostream& os, const RationalNumber& n);
};
