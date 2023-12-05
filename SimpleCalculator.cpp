#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

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

char SimpleCalculator::readUserOperator() {

    string prompt = "Choose from these operations \"+\", \"-\", \"*\", \"/\", \"^\": ";

    char userInput = ' ';
    cout << prompt;
    cin >> userInput;
    cout << endl;

    while(!isValidOperator(userInput)) {

        cout << "The user input " << userInput << " is invalid." << endl;
        cout << prompt;
        cin >> userInput;
        cout << endl;
    }
    return userInput;
}

bool SimpleCalculator::isValidOperand(int operand){

    if(operand >= 0 && operand <=9 ) {
        return true;
    } else {
        return false;
    }
}

int SimpleCalculator::readUserOperands(string prompt) {

    int userInput = 0;
    cout << prompt;
    
    cin >> userInput;
    cout << endl;

    while(!isValidOperand(userInput)) {

        cout << "The user input " << userInput << " is invalid." << endl;
        cout << prompt;
        cin >> userInput;
        cout << endl;
    }

    return userInput;
}

void SimpleCalculator::setX(int x) {

    this->x = x;
}

void SimpleCalculator::setY(int y) {

    this->y = y;
}

double SimpleCalculator::runOperation() {

    double outcome = 0.0;

    char state = this->operation;

    switch (state) {

    case '+':

        outcome = addition();

        break;
    
    case '-':

        outcome = subtraction();
        break;

    case '*':

        outcome = multiplication();

        break;
    
    case '/':

        outcome = division();

        break;

    case '^':

        outcome = exponentiation();

        break;

    default:

        return outcome;

        break;
    }

    return outcome;
}

void SimpleCalculator::setOperator(char operation) {

    this->operation = operation;
}

int SimpleCalculator::addition() {

    int sum = 0;

    sum = x + y;

    return sum;
}

int SimpleCalculator::subtraction() {

    int difference = 0;

    difference = x - y;

    return difference;
}

int SimpleCalculator::multiplication() {

    int product = 0;

    product = x * y;

    return product;
}

double SimpleCalculator::division() {

    double quotient = 0;

    quotient = (double)x / y;

    return quotient;
}

int SimpleCalculator::exponentiation() {

    int power = 0;

    power = pow((double)x,(double)y);

    return power;
}

void SimpleCalculator::displayOutput(double outcome){

    char state = this->operation;

    switch (state) {

    case '+':

        cout << to_string(this->x) << " plus " << to_string(this->y) << " equals " << outcome << endl;

        break;
    
    case '-':

        cout << to_string(this->x) << " minus " << to_string(this->y) << " equals " << outcome << endl;

        break;

    case '*':

        cout << to_string(this->x) << " times " << to_string(this->y) << " equals " << outcome << endl;

        break;
    
    case '/':

        cout << to_string(this->x) << " divided by " << to_string(this->y) << " equals " << outcome << endl;

        break;

    case '^':

        cout << to_string(this->x) << " to the power of " << to_string(this->y) << " equals " << outcome << endl;

        break;

    default:
        break;
    }


}