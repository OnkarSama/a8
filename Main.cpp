#include "SimpleCalculator.h"
#include <string>

using namespace std;

int main() {

    SimpleCalculator calculator;

    string ifContinue = "yes";

    while(ifContinue == "yes") {

        char userOperator = calculator.readUserOperator();

        calculator.setOperator(userOperator);


    }
}