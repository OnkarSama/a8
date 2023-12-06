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
        cout << endl;
        cout << prompt;
        cin >> userInput;
    }
    return userInput;
}

bool SimpleCalculator::isValidOperand(string operand){

    if(stoi(operand) >=0 && stoi(operand) <=9) {
        return true;
    } else {
        return false;
    }
}

bool SimpleCalculator::hasExtraInput() {
    return cin.peek() != '\n';  // Check if there is additional input
}

int SimpleCalculator::readUserOperands(string prompt) {

    string userInput;
    cout << prompt;
    
    cin >> userInput;
    
    cout << endl;

    while(!isValidOperand(userInput) || hasExtraInput()) {

        cout << "The user input " << userInput << " is invalid." << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << endl;
        cout << prompt;
        cin >> userInput;
    }

    return stoi(userInput);
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

    if(this->y == 0){
        return -1;
    } else {

        quotient = (double)x / y;
    }

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
        cout << endl;

        break;
    
    case '-':

        cout << to_string(this->x) << " minus " << to_string(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;

    case '*':

        cout << to_string(this->x) << " times " << to_string(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;
    
    case '/':

        if(outcome == -1) {
            cout << "Division by zero is not allowed" << endl;
            cout << endl;
        } else {
            cout << to_string(this->x) << " divided by " << to_string(this->y) << " equals " << outcome << endl;
            cout << endl;
        }

        break;

    case '^':

        cout << to_string(this->x) << " to the power of " << to_string(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;

    default:
        break;
    }


}