
#include "Equation.h"

Equation::Equation() {};

void Equation::set_a(std::string a) {
    this->a = std::stod(a);
}

void Equation::set_b(std::string b) {
    this->b = std::stod(b);
}

void Equation::set_c(std::string c) {
    this->c = std::stod(c);
}

void Equation::set_min(std::string min) {
    rangeMin = std::stod(min);
}

void Equation::set_max(std::string max) {
    rangeMax = std::stod(max);
}

double Equation::get_d() {
    d = b * b - 4 * a * c;
    return d;
}

void Equation::solution() {
    if (a == 0) {
        throw std::runtime_error("Рівняння не є квадратним (a = 0)");
    }

    d = b * b - 4 * a * c;

    if (d < 0) {
        throw std::runtime_error("Рівняння не має дійсних розв'язків");
    }

    x1 = (-b + std::sqrt(d)) / (2 * a);
    x2 = (-b - std::sqrt(d)) / (2 * a);

    if (x1 < rangeMin || x1 > rangeMax || x2 < rangeMin || x2 > rangeMax) {
        throw std::runtime_error("Корені рівняння не знаходяться в межах зазначеного діапазону");
    }
}
double Equation::get_x1() {
    return x1;
}

double Equation::get_x2() {
    return x2;
}

