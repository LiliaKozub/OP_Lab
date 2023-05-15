#include "functions.h"

int main() {
    int n, m;
    srand(time(NULL));
    n = (rand()%100)/10 + 1;
    m = (rand()%100)/10 + 1;
    Print(n, m);
    Numeric *ptr;
    Numeric obj;
    ptr = &obj;
    RationalNumber *arr1 = new RationalNumber[n];
    ComplexNumber *arr2 = new ComplexNumber[m];
    GenerateRational(arr1, n);
    GenerateComplex(arr2, m);
    RationalDecrease(arr1, n, ptr);
    ptr = &obj;
    ComplexIncrease(arr2, m, ptr);
    PrintRational(arr1, n);
    PrintComplex(arr2, m);
    ptr = &obj;
    CountSum(arr1, n, arr2, m, ptr);


    delete []arr1;
    delete []arr2;

    return 0;
}
