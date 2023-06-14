
#pragma once
#include <string>
#include <cmath>
#include <iostream>

class Equation {
private:
    double a, b, c, d, x1, x2, rangeMin, rangeMax;

public:
    Equation();

    void set_a(std::string a);

    void set_b(std::string b);

    void set_c(std::string c);

    void set_min(std::string min);

    void set_max(std::string max);

    double get_d();

    void solution();

    double get_x1();

    double get_x2();
};


