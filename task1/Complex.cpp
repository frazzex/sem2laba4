#include "Complex.h"
#include <cmath>
#include <iomanip>

using namespace std;


Complex::Complex() {
    this->re = 0.0;
    this->im = 0.0;
}

Complex::Complex(const double x, const double y) {
    this->re = x;
    this->im = y;
}

double Complex::abs() const {
    return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

Complex::Complex(const Complex &complex) {
    this->re = complex.re;
    this->im = complex.im;
}

Complex &Complex::operator=(const Complex &other) {
    if (&other == this) return *this;

    this->re = other.re;
    this->im = other.im;
    return *this;
}

Complex Complex::operator+(const Complex &other) const {
    return {this->re + other.re, this->im + other.im};
}

Complex Complex::operator-(const Complex &other) const {
    return {this->re - other.re, this->im - other.im};
}

Complex Complex::operator*(const Complex &other) const {
    return {this->re * other.re, this->im * other.im};
}

Complex Complex::operator/(const Complex &other) const {
    return {this->re / other.re, this->im / other.im};
}

Complex &Complex::operator++() {
    this->re += 1.0;
    this->im += 1.0;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    ++(*this);
    return temp;
}

Complex &Complex::operator--() {
    this->re -= 1.0;
    this->im -= 1.0;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp(*this);
    --(*this);
    return temp;
}

bool Complex::operator>(const Complex &other) const {
    if (this->abs() > other.abs()) return true;
    return false;
}

bool Complex::operator<(const Complex &other) const {
    if (this->abs() < other.abs()) return true;
    return false;
}

bool Complex::operator==(const Complex &other) const {
    if (this->abs() == other.abs()) return true;
    return false;
}

bool Complex::operator!=(const Complex &other) const {
    if (this->abs() != other.abs()) return true;
    return false;
}

ostream &operator <<(ostream &os, const Complex &complex) {
    return os << complex.re << " + " << complex.im << "i";
}

istream &operator>>(istream &is, Complex &complex) {
    double re, im;

    is >> re >> im;

    if (is.good()) {
        complex.re = re;
        complex.im = im;
    }

    return is;
}
