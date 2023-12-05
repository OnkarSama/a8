#include "SimpleCalculator.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    SimpleCalculator calculator;

    string ifContinue = "yes";

    while(ifContinue == "yes") {

        char userOperator = calculator.readUserOperator();
        int x = calculator.readUserOperands("Enter the first number you want the opertion to be completed on: ");
        int y = calculator.readUserOperands("Enter the second number you want to operation to be completed on: ");

        calculator.setOperator(userOperator);
        calculator.setX(x);
        calculator.setY(y);

        double outcome = calculator.runOperation();

        calculator.displayOutput(outcome);

        cout << "Do you want to continue? (Enter \"yes\" to continue and anything else to exit.)" << endl;
        cin >> ifContinue;
    }
}