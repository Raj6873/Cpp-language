#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.1452059;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circle is: " << area << endl;
}