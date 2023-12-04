#include <iostream>
#include <string>
#include <math.h>

#include "SimpleCalculator.h"

using namespace std;

SimpleCalculator::SimpleCalculator() { x = y = 0; operation = ' ';}

bool SimpleCalculator::isValidOperator(char oper){

    if(oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '^') { 

        return true;
    } else {
        return false;
    }
}

bool SimpleCalculator::isValidOperand(int operand){

    if(operand >= 0 && operand <=9) {
        return true;
    } else {
        return false;
    }
}

char SimpleCalculator::readUserOperator(string prompt) {

    char userInput = ' ';
    cout << prompt << endl;
    cin >> userInput;

    while(!isValidOperator(userInput)) {

        cout << "The user input " << userInput << " is invalid." << endl;
        cout << prompt << endl;
        cin >> userInput;
    }
    return userInput;
}

int SimpleCalculator::readUserOperands(string prompt) {

    int userInput = 0;
    cout << prompt << endl;
    
    cin >> userInput;

    while(!isValidOperand(userInput)) {

        cout << "The user input " << userInput << " is invalid." << endl;
        cout << prompt << endl;
        cin >> userInput;
    }

    return userInput;
}

void SimpleCalculator::setX(int x) {

    this->x = x;
}

void SimpleCalculator::setY(int y) {

    this->y = y;
}

void SimpleCalculator::setOperator(char operation) {

    this->operation = operation;
}

int SimpleCalculator::addition(int x, int y) {

    int sum = 0;

    sum = x + y;

    return sum;
}

int SimpleCalculator::subtraction(int x, int y) {

    int difference = 0;

    difference = x - y;

    return difference;
}

int SimpleCalculator::multiplication(int x, int y) {

    int product = 0;

    product = x * y;

    return product;
}

double SimpleCalculator::division(int x, int y) {

    double quotient = 0;

    quotient = (double)x / y;

    return quotient;
}

int SimpleCalculator::exponentiation(int base, int exponent) {

    int power = 0;

    power = pow((double)base,(double)exponent);

    return power;
}