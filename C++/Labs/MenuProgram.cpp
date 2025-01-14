//Mikaela-Rose Porter
#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {
    int choice;
    double radius, length, width, side, area;

    do {
        // Display the menu
        cout << "Menu Driven Program" << endl;
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of Square" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius of Circle: ";
                cin >> radius;
                area = PI * radius * radius;
                cout << "Area of Circle: " << area << endl;
                break;
            case 2:
                cout << "Enter length of Rectangle: ";
                cin >> length;
                cout << "Enter width of Rectangle: ";
                cin >> width;
                area = length * width;
                cout << "Area of Rectangle: " << area << endl;
                break;
            case 3:
                cout << "Enter side length of Square: ";
                cin >> side;
                area = side * side;
                cout << "Area of Square: " << area << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Please enter the correct choice." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
