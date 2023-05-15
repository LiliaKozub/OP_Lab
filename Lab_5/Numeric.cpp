#include "Numeric.h"

void Numeric::increase(int n) {
    value *= n;
}

void Numeric::decrease(int n) {
    value /= n;
}

double Numeric::module() {
    return fabs(value);
}


