#include <iostream>
using namespace std;

int main() {
    float radius, perimeter;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    perimeter = 2 * PI * radius;

    cout << "Perimeter (Circumference) of the circle is: " << perimeter << endl;
    
}