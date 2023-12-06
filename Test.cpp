#include "SimpleCalculator.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    SimpleCalculator calculator;

    // Test Set 1: Addition
    char userOperator1 = '+';
    string x1 = "5";
    string y1 = "7";

    if (calculator.isValidOperand(x1) && calculator.isValidOperand(y1)) {
        calculator.setOperator(userOperator1);
        calculator.setX(stoi(x1));
        calculator.setY(stoi(y1));

        double outcome1 = calculator.runOperation();
        calculator.displayOutput(outcome1);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Test Set 2: Division
    char userOperator2 = '/';
    string x2 = "20";
    string y2 = "4";

    if (calculator.isValidOperand(x2) && calculator.isValidOperand(y2)) {
        calculator.setOperator(userOperator2);
        calculator.setX(stoi(x2));
        calculator.setY(stoi(y2));

        double outcome2 = calculator.runOperation();
        calculator.displayOutput(outcome2);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Test Set 3: Exponentiation
    char userOperator3 = '^';
    string x3 = "3";
    string y3 = "4";

    if (calculator.isValidOperand(x3) && calculator.isValidOperand(y3)) {
        calculator.setOperator(userOperator3);
        calculator.setX(stoi(x3));
        calculator.setY(stoi(y3));

        double outcome3 = calculator.runOperation();
        calculator.displayOutput(outcome3);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Test Set 4: Subtraction
    char userOperator4 = '-';
    string x4 = "10";
    string y4 = "6";

    if (calculator.isValidOperand(x4) && calculator.isValidOperand(y4)) {
        calculator.setOperator(userOperator4);
        calculator.setX(stoi(x4));
        calculator.setY(stoi(y4));

        double outcome4 = calculator.runOperation();
        calculator.displayOutput(outcome4);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Test Set 5: Multiplication
    char userOperator5 = '*';
    string x5 = "8";
    string y5 = "9";

    if (calculator.isValidOperand(x5) && calculator.isValidOperand(y5)) {
        calculator.setOperator(userOperator5);
        calculator.setX(stoi(x5));
        calculator.setY(stoi(y5));

        double outcome5 = calculator.runOperation();
        calculator.displayOutput(outcome5);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Additional Test Set 6: Division by Zero
    char validOperator6 = '/';
    string x6 = "9";
    string y6 = "0";

    if (calculator.isValidOperand(x6) && calculator.isValidOperand(y6)) {
        calculator.setOperator(validOperator6);
        calculator.setX(stoi(x6));
        calculator.setY(stoi(y6));

        double outcome6 = calculator.runOperation();
        calculator.displayOutput(outcome6);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Additional Test Set 7: Invalid Operand (Non-Numeric)
    char validOperator7 = '*';
    string invalidOperand7 = "-";

    if (calculator.isValidOperand(invalidOperand7)) {
        calculator.setOperator(validOperator7);
        calculator.setX(stoi(invalidOperand7));
        calculator.setY(5);

        double outcome7 = calculator.runOperation();
        calculator.displayOutput(outcome7);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Additional Test Set 8: Invalid Operand (Out of Range)
    char validOperator8 = '-';
    string invalidOperand8 = "15";

    if (calculator.isValidOperand(invalidOperand8)) {
        calculator.setOperator(validOperator8);
        calculator.setX(8);
        calculator.setY(stoi(invalidOperand8));

        double outcome8 = calculator.runOperation();
        calculator.displayOutput(outcome8);
    } else {
        cout << "Invalid operands " << endl;
        cout << endl;
    }

    // Additional Test Set 9: Invalid Operator
    char invalidOperator9 = '%';

    cout << "Test 9: Invalid Operator" << endl;
    cout << endl;

    if (calculator.isValidOperator(invalidOperator9)) {
        calculator.setOperator(invalidOperator9);
        calculator.setX(8);
        calculator.setY(4);

        double outcome9 = calculator.runOperation();
        calculator.displayOutput(outcome9);
        cout << endl;
    } else {
        cout << "Invalid operator " << endl;
        cout << endl;
    }

    // Additional Test Set 10: Invalid Operator and Operand
    char invalidOperator10 = '$';
    string invalidOperand10 = "xyz";

    cout << "Test 10: Invalid Operator and Operand" << endl;
    cout << endl;

    if (calculator.isValidOperator(invalidOperator10) && calculator.isValidOperand(invalidOperand10)) {
        calculator.setOperator(invalidOperator10);
        calculator.setX(stoi(invalidOperand10));
        calculator.setY(3);

        double outcome10 = calculator.runOperation();
        calculator.displayOutput(outcome10);
        cout << endl;
    } else {
        cout << "Invalid operator or operand" << endl;
        cout << endl;
    }

    return 0;
}
