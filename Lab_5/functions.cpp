#include "functions.h"

void Print(int a, int b){
    cout << "\nn = " << a << "  m = " << b << endl;
}

void GenerateRational(RationalNumber arr[], int n){
    cout << "\nRational numbers:";
    srand(time(NULL));
    double value = 0;
    int d = 0;
    cout << endl;
    for(int i = 0; i < n; i++){
        value = rand()%201 - 100;
        d = rand()%100 + 1;
        d = abs(d);
        arr[i] = RationalNumber(value, d);
        arr[i].reduce();
        cout << arr[i] << endl;
    }
    cout << endl;
}

void GenerateComplex(ComplexNumber arr[], int n){
    cout << "Complex numbers:";
    srand(time(NULL));
    double re = 0;
    double im = 0;
    cout << endl;
    for(int i = 0; i < n; i++){
        re = (double)rand() / RAND_MAX * 200 - 100;
        im = (double)rand() / RAND_MAX * 200 - 100;
        arr[i] = ComplexNumber(re, im);
        cout << arr[i] << endl;
    }
    cout << endl;
}

void PrintRational(RationalNumber arr[], int n){
    cout << "\nRational numbers after decrease:";
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}

void PrintComplex(ComplexNumber arr[], int n){
    cout << "\nComplex numbers after increase:";
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}

void CountSum(RationalNumber arr1[], int n, ComplexNumber arr2[], int m,  Numeric *ptr){
    double sum_1, sum_2;
    sum_1 = sum_2 = 0;
    for(int i = 0; i < n; i++){
        ptr = &arr1[i];
        sum_1 += ptr->module();
    }
    for(int i = 0; i < m; i++){
        ptr = &arr2[i];
        sum_2 += ptr->module();
    }
    cout << "\nSum of modules -> " << sum_1 + sum_2 << endl;
}

void RationalDecrease(RationalNumber arr[], int n, Numeric *ptr){
    for(int i =0; i < n; i++){
        ptr = &arr[i];
        ptr->decrease(2);
    }
}

void ComplexIncrease(ComplexNumber arr[], int n, Numeric *ptr){
    for(int i =0; i < n; i++){
        ptr = &arr[i];
        ptr->increase(3);
    }
}