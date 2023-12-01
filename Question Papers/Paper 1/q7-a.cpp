#include <iostream>
using namespace std;

float area(float base, float height) {
    return 0.5 * base * height; // Area of triangle
}

float area(int length, float width) {
    return length * width; // Area of rectangle
}

float area(float radius) {
    return 3.14159 * radius * radius; // Area of circle
}

int main() {
    float base, height, length, width, radius;
    int ilen;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(ilen, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    return 0;
}

float area(float base,float height)
{
    
}