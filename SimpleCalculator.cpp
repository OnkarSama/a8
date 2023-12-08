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

        cout << "The user input " << userInput << " is invalid. Enter from one of these \"+\", \"-\", \"*\", \"/\", \"^\" " << endl;
        cout << endl;
        cout << prompt;
        cin >> userInput;
    }
    return userInput;
}

bool SimpleCalculator::isValidOperand(string operand) {

    try {
        int value = stoi(operand);
        return value >= 0 && value <= 9;
    } catch (const std::invalid_argument& e) {
        return false;  // Conversion failed
    } catch (const std::out_of_range& e) {
        return false;  // Value is out of the range of int
    }
}


int SimpleCalculator::readUserOperands(string prompt) {

    string userInput;
    cout << prompt;
    
    cin >> userInput;
    
    cout << endl;

    while(!isValidOperand(userInput)) {

        cout << "The user input " << userInput << " is invalid. Enter a digit from 0-9" << endl;        
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

string SimpleCalculator::intToString(int num) {

    string numsToWords[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    return numsToWords[num];
}

void SimpleCalculator::displayOutput(double outcome){

    char state = this->operation;


    switch (state) {

    case '+':

        cout << intToString(this->x) << " plus " << intToString(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;
    
    case '-':

        cout << intToString(this->x) << " minus " << intToString(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;

    case '*':

        cout << intToString(this->x) << " times " << intToString(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;
    
    case '/':

        if(outcome == -1) {
            cout << "Division by zero is not allowed" << endl;
            cout << endl;
        } else {
            cout << intToString(this->x) << " divided by " << intToString(this->y) << " equals " << outcome << endl;
            cout << endl;
        }

        break;

    case '^':

        cout << intToString(this->x) << " to the power of " << intToString(this->y) << " equals " << outcome << endl;
        cout << endl;

        break;

    default:
        break;
    }

}