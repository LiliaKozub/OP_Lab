#include "ComplexNumber.h"

void ComplexNumber::increase(int n) {
    Numeric::increase(n);
    im *= n;
}

void ComplexNumber::decrease(int n) {
    Numeric::decrease(n);
    im /= n;
}

double ComplexNumber::module() {
    return sqrt(value*value + im*im);
}

ostream& operator<<(std::ostream& os, const ComplexNumber& n) {
    if(n.im >= 0)
        os << fixed << setw(7) << setprecision(2) << n.value << " + i * " << setprecision(2) << n.im;
    else
        os << fixed << setw(7) << setprecision(2) << n.value << " - i * " << setprecision(2) << fabsf(n.im);
    return os;
}