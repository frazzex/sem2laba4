#include <iostream>
#include "task1/Complex.h"

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

int main() {
    system("chcp 65001");
    setlocale(LC_ALL, "ru");
    task1();

    return 0;
}
