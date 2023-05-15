#pragma once
#include "RationalNumber.h"
#include "ComplexNumber.h"
#include <random>
#include <time.h>


void Print(int a, int b);  //вивід значень a, b
void GenerateRational(RationalNumber arr[], int n);  //генерація раціональних чисел
void GenerateComplex(ComplexNumber arr[], int n);  //генерація комплексних чисел
void PrintRational(RationalNumber arr[], int n);  //вивід раціональних чисел
void PrintComplex(ComplexNumber arr[], int n);  //вивід комплексних чисел
void CountSum(RationalNumber arr1[], int n, ComplexNumber arr2[], int m,  Numeric *ptr);  //обчислення суми модулів
void RationalDecrease(RationalNumber arr[], int n, Numeric *ptr);  //зменшення раціональних числа
void ComplexIncrease(ComplexNumber arr[], int n, Numeric *ptr);  //збільшення комплексних числа

