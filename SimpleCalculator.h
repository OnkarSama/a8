#ifndef SIMPLE_CALCULATOR_H
#define SIMPLE_CALCULATOR_H

#include <string>
using namespace std;

class SimpleCalculator {

public:
    SimpleCalculator();

    char readUserOperator();
    int readUserOperands(string prompt);

    bool isValidOperator(char operation);
    bool isValidOperand(int operand);

    void setX(int x);
    void setY(int y);
    void setOperator(char operation);


    int addition();
    int subtraction();
    int multiplication();
    double division();
    int exponentiation();
    
    void displayOutput(double outcome);

private:

    int x;
    int y;
    char operation;

};

#endif