#ifndef SIMPLE_CALCULATOR_H
#define SIMPLE_CALCULATOR_H

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
    
    void displayOutput(int x, int y, int outcome, char operation);

private:

    int x;
    int y;
    char operation;

};

#endif