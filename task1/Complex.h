//
// Created by ARTEM on 14.02.2026.
//

#ifndef LABA2_2026_COMPLEX_H
#define LABA2_2026_COMPLEX_H
#include <iosfwd>


class Complex {
    double re{};
    double im{};

public:
    Complex();

    Complex(double x, double y);

    Complex(const Complex &complex);

    [[nodiscard]] double abs() const;


    Complex &operator=(const Complex &other);

    Complex operator+(const Complex &other) const;

    Complex operator-(const Complex &other) const;

    Complex operator*(const Complex &other) const;

    Complex operator/(const Complex &other) const;

    Complex &operator++();

    Complex operator++(int);

    Complex &operator--();

    Complex operator--(int);

    bool operator>(const Complex &other) const;

    bool operator<(const Complex &other) const;

    bool operator==(const Complex &other) const;

    bool operator!=(const Complex &other) const;

    friend std::ostream &operator<<(std::ostream &os, const Complex &complex);

    friend std::istream &operator>>(std::istream &is, Complex &complex);
};


#endif //LABA2_2026_COMPLEX_H
