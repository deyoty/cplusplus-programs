#include <iostream>
using namespace std;

// Function to calculate the area of a triangle
double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculate_rectangle_area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculate_square_area(double side) {
    return side * side;
}

int main() {
    while (true) {
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                double base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is " << calculate_triangle_area(base, height) << " square units." << endl;
                break;
            case 2:
                double rect_length, rect_width;
                cout << "Enter the length of the rectangle: ";
                cin >> rect_length;
                cout << "Enter the width of the rectangle: ";
                cin >> rect_width;
                cout << "The area of the rectangle is " << calculate_rectangle_area(rect_length, rect_width) << " square units." << endl;
                break;
            case 3:
                double square_side;
                cout << "Enter the side length of the square: ";
                cin >> square_side;
                cout << "The area of the square is " << calculate_square_area(square_side) << " square units." << endl;
                break;
            default:
                cout << "Invalid choice. Please select 1, 2, or 3." << endl;
        }

        cout << "Do you want to calculate another shape's area? (y/n): ";
        char repeat;
        cin >> repeat;
        if (repeat != 'y' && repeat != 'Y') {
            break;
        }
    }

    return 0;
}
