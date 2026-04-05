#include <iostream>
#include "task1/Complex.h"
#include "task2/Rational.h"

using namespace std;


void task1() {
    Complex complex1 = Complex(15, 21);
    Complex complex2 = Complex(15, 20);
    Complex complex3 = Complex();
    Complex complex4 = Complex(complex2);

    cout << "Введите комплексное число (2 параметра):" << endl;
    cin >> complex3;

    cout << "----------" << endl;
    cout << "Комплексное число №1: " << complex1 << endl;
    cout << "Комплексное число №2: " << complex2 << endl;
    cout << "Комплексное число №3: " << complex3 << endl;
    cout << "Комплексное число №4 (копия комплексного №2: " << complex4 << endl;
    cout << "----------" << endl << endl;

    cout << "complex1 + complex2 = " << complex1 + complex2 << endl;
    cout << "complex1 - complex2 = " << complex1 - complex2 << endl;
    cout << "complex1 / complex2 = " << complex1 / complex2 << endl;
    cout << "complex1 * complex2 = " << complex1 * complex2 << endl;
    cout << "----------" << endl << endl;

    cout << "++complex1 = " << ++complex1 << endl;
    cout << "complex1++ = " << complex1++ << endl;
    cout << "complex1 = " << complex1 << endl;
    cout << "--complex1 = " << --complex1 << endl;
    cout << "complex1-- = " << complex1-- << endl;
    cout << "complex1 == " << complex1 << endl;
    cout << "----------" << endl << endl;

    cout << "complex1 > complex2 : " << (complex1 > complex2 ? "Да" : "Нет") << endl;
    cout << "complex1 < complex2 : " << (complex1 < complex2 ? "Да" : "Нет") << endl;
    cout << "complex1 == complex2 : " << (complex1 == complex2 ? "Да" : "Нет") << endl;
    cout << "complex1 != complex2 : " << (complex1 != complex2 ? "Да" : "Нет") << endl;
}

void task2() {
    Rational rational1 = {8, 3};
    Rational rational2 = {11, 4};

    cout << "----- Изначальные рациональные числа -----" << endl;
    cout << "Число 1: " << rational1 << endl;
    cout << "Число 2: " << rational2 << endl << endl;

    cout << "----- Арифметические операции над дробями -----" << endl;
    cout << "Сложение: " << rational1 << " + " << rational2 << " = " << rational1 + rational2 << endl;
    cout << "Вычитание: " << rational1 << " - " << rational2 << " = " << rational1 - rational2 << endl;
    cout << "Умножение: " << rational1 << " * " << rational2 << " = " << rational1 * rational2 << endl;
    cout << "Деление: " << rational1 << " / " << rational2 << " = " << rational1 / rational2 << endl;

    cout << "----- Арифметические операции над  рац. числом с использованием int-чисел -----" << endl;
    cout << "Сложение с числом 5: " << rational1 << " + 5 = " << rational1 + 5 << endl;
    cout << "Вычитание с числом 5: " << rational1 << " - 5 = " << rational1 - 5 << endl;
    cout << "Умножение на число 5: " << rational1 << " * 5 = " << rational1 * 5 << endl;
    cout << "Деление на число 5: " << rational1 << " / 5 = " << rational1 / 5 << endl << endl;

    cout << "----- Составные операторы присваивания -----" << endl;

    cout << "Сложение:" << rational1 << " += " << rational2 << " = ";
    rational1 += rational2;
    cout << rational1 << endl;

    cout << "Вычитание:" << rational1 << " -= " << rational2 << " = ";
    rational1 -= rational2;
    cout << rational1 << endl;

    cout << "Умножение:" << rational1 << " *= " << rational2 << " = ";
    rational1 *= rational2;
    cout << rational1 << endl;

    cout << "Деление:" << rational1 << " /= " << rational2 << " = ";
    rational1 /= rational2;
    cout << rational1 << endl << endl;

    cout << "----- Операторы сравнения -----" << endl;
    cout << rational1 << " == " << rational2 << "? Ответ: " << (rational1 == rational2 ? "Да" : "Нет") << endl;
    cout << rational1 << " != " << rational2 << "? Ответ: " << (rational1 != rational2 ? "Да" : "Нет") << endl << endl;

    cout << "----- Унарные операторы -----" << endl;
    cout << "Оператор + : +" << rational1 << " = " << +rational1 << endl;
    cout << "Оператор - : -" << rational1 << " = " << -rational1 << endl;
}

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "ru");
    task2();

    return 0;
}
