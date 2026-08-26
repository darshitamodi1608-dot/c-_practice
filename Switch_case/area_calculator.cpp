/* Menu Driven Area Calculator */
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float r, l, b, base, height, area;

    cout << "----- Area Calculator -----" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter radius: ";
            cin >> r;

            area = 3.14 * r * r;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> l;

            cout << "Enter breadth: ";
            cin >> b;

            area = l * b;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> base;

            cout << "Enter height: ";
            cin >> height;

            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
