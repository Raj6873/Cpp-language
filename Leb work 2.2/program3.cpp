#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    cout << "Enter base of the triangle: ";
    cin >> base;

    cout << "Enter height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "Area of the triangle is: " << area << endl;

}
