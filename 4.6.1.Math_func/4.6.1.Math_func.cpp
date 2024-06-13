#include <iostream>
#include "MathFunc.h"


int main()
{
    setlocale(LC_ALL, "ru");
    int firstNum, secondNum, result, chooseOp;
    std::cout << "Введите первое число: \n";
    std::cin >> firstNum;
    std::cout << "Введите второе число: \n";
    std::cin >> secondNum;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> chooseOp;
    switch (chooseOp) {
    case 1: result = sum(firstNum, secondNum); std::cout << result; break;
    case 2: result = subtract(firstNum, secondNum); std::cout << result; break;
    case 3: result = multiplic(firstNum, secondNum); std::cout << result; break;
    case 4: result = division(firstNum, secondNum); std::cout << result; break;
    case 5: result = exponent(firstNum, secondNum); std::cout << result; break;
    }
}