#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 5;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int Modulo  = a % b;


    // addition
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;

    // subtraction
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;

    // multiplication
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;

    // division
    cout << "Division of " << a << " and " << b << " is " << a / b << endl;

    // Modulo 
    cout << "Modulo of " << a << " and " << b << " is " << a % b  << endl;

    cout << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a -b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b  << endl;
}