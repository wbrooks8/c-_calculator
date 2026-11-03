#include <iostream>
#include "CalculationHandler/calcHandler.h"

int main() {
    char finished = 'n';
    double currentTotal;

    while (finished != 'y') {
        std::cout << "Please enter your number your calculation: ";
        double number1{};
        char type{};
        double number2{};

        std::cin >> number1 >> type >> number2;

        switch (type) {
            case '+':
                currentTotal = calcHandler::add(number1, number2);
                break;
            case '-':
                currentTotal = calcHandler::subtract(number1, number2);
                break;
            case '*':
                currentTotal = calcHandler::multiply(number1, number2);
                break;
            case '/':
                currentTotal = calcHandler::divide(number1, number2);
                break;
            default:
                break;
        }

        std::cout << currentTotal << std::endl;
        std::cout << "Are you finished? Y or N" << std::endl;
        std::cin >> finished;
        if (finished == 'Y' || finished == 'y')
            finished = 'y';
    }

    return 0;
}
