#include <iostream>

using namespace std;

class Calculator {
public:
    double add(double x, double y) {
        return x + y;
    }
    double subtract(double x, double y) {
        return x - y;
    }
    double multiply(double x, double y) {
        return x * y;
    }
    double divide(double x, double y) {
        if (y == 0) {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
        return x / y;
    }
};

int main() {
    Calculator calc;
    double x, y;
    char op;
    cout << "Enter an expression in the form x operator y: ";
    cin >> x >> op >> y;
    switch (op) {
        case '+':
            cout << "Result: " << calc.add(x, y) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(x, y) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(x, y) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(x, y) << endl;
            break;
        default:
            cout << "Error: Incorrect input." << endl;
            break;
    }
    return 0;
}
