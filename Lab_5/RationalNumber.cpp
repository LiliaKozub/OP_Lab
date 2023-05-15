#include "RationalNumber.h"

void RationalNumber::increase(int n) {
    nominator *= n;
    reduce();
}

void RationalNumber::decrease(int n) {
    denominator *= n;
    reduce();
}

double RationalNumber::module() {
    Numeric::module();
}

void RationalNumber::reduce() {
    int gcd = abs(getGCD(nominator, denominator));
    nominator /= gcd;
    denominator /= gcd;
}

int RationalNumber::getGCD(int a, int b) {
    return b == 0 ? a : getGCD(b, a % b);
}

ostream& operator<<(std::ostream& os, const RationalNumber& n) {
    os << setw(4) << n.nominator << "/" << n.denominator;
    return os;
}