#ifndef SIMPLE_CALCULATOR_H
#define SIMPLE_CALCULATOR_H

class SimpleCalculator {

public:
    SimpleCalculator();

    char readUserOperator(string prompt);
    int readUserOperands(string prompt);

    bool isValidOperator(char operation);
    bool isValidOperand(int operand);

    void setX(int x);
    void setY(int y);
    void setOperator(char operation);


    int addition(int x, int y);
    int subtraction(int x, int y);
    int multiplication(int x, int y);
    double division(int x, int y);
    int exponentiation(int base, int power);
    
    void displayOutput(int x, int y, int outcome, char operation);

private:

    int x;
    int y;
    char operation;

};

#endif