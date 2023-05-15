#pragma once
#include "Numeric.h"

class ComplexNumber: public Numeric{
private:
    double im;
public:
    ComplexNumber(): Numeric(){};
    ComplexNumber(double z, double i): Numeric(z), im(i){};
    void increase(int n) override;
    void decrease(int n) override;
    double module() override;
    friend ostream& operator<<(std::ostream& os, const ComplexNumber& n);
};