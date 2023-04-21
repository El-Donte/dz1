

#include <iostream>
#include "fraction.h"
int main()
{   
    setlocale(LC_ALL, "Russian");
    int key, num, dem;
    Fraction F1(0,0);
    Fraction F2(0,0);
    do {
        std::cout << "\nвыберете действие:\n1.сложение\n2.вычитание\n3.умножение\n4.деление\n5.выход\n-> ";
        std::cin >> key;
        switch (key)
        {
        case 1:
            std::cout << "введите числитель для первой дроби: ";
            std::cin >> num;
            F1.setNumerator(num);
            std::cout << "введите знаменатель для первой дроби: ";
            std::cin >> dem;
            F1.setDenominator(dem);
            std::cout << "введите числитель для второй дроби: ";
            std::cin >> num;
            F2.setNumerator(num);
            std::cout << "введите знаменатель для второй дроби: ";
            std::cin >> dem;
            F2.setDenominator(dem);
            F1 + F2;
            std::cout << "результат:\n" << F1.getNumerator() << "/" << F1.getDenominator();
            break;
        case 2:
            std::cout << "введите числитель для первой дроби: ";
            std::cin >> num;
            F1.setNumerator(num);
            std::cout << "введите знаменатель для первой дроби: ";
            std::cin >> dem;
            F1.setDenominator(dem);
            std::cout << "введите числитель для второй дроби: ";
            std::cin >> num;
            F2.setNumerator(num);
            std::cout << "введите знаменатель для второй дроби: ";
            std::cin >> dem;
            F2.setDenominator(dem);
            F1-F2;
            std::cout << "результат:\n" << F1.getNumerator() << "/" << F1.getDenominator();
            break;
        case 3:
            std::cout << "введите числитель для первой дроби: ";
            std::cin >> num;
            F1.setNumerator(num);
            std::cout << "введите знаменатель для первой дроби: ";
            std::cin >> dem;
            F1.setDenominator(dem);
            std::cout << "введите числитель для второй дроби: ";
            std::cin >> num;
            F2.setNumerator(num);
            std::cout << "введите знаменатель для второй дроби: ";
            std::cin >> dem;
            F2.setDenominator(dem);
            F1*F2;
            std::cout << "результат:\n" << F1.getNumerator() << "/" << F1.getDenominator();
            break;
        case 4:
            std::cout << "введите числитель для первой дроби: ";
            std::cin >> num;
            F1.setNumerator(num);
            std::cout << "введите знаменатель для первой дроби: ";
            std::cin >> dem;
            F1.setDenominator(dem);
            std::cout << "введите числитель для второй дроби: ";
            std::cin >> num;
            F2.setNumerator(num);
            std::cout << "введите знаменатель для второй дроби: ";
            std::cin >> dem;
            F2.setDenominator(dem);
            F1/F2;
            std::cout << "результат:\n" << F1.getNumerator() << "/" << F1.getDenominator();
            break;
        default:
            break;
        }
        

    } while (key != 5);
}


