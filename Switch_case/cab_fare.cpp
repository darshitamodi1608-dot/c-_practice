/* Cab Fare Calculator */
#include <iostream>
using namespace std;

int main()
{
    int amount;
    int c;

    cout << "Enter distance : ";
    cin >> amount;

    cout << "\n1. Mini Cab";
    cout << "\n2. Sedan";
    cout << "\n3. Luxury Car";
    cout << "\n4. SUV";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
            amount = amount + 10;
            cout << "\nTotal Fare : " << amount;
            break;

        case 2:
            amount = amount * 15;
            cout << "\nTotal Fare : " << amount;
            break;

        case 3:
            amount = amount * 20;
            cout << "\nTotal Fare : " << amount;
            break;

        case 4:
            amount = amount * 30;
            cout << "\nTotal Fare : " << amount;
            break;

        default:
            cout << "\nInvalid choice";
    }

    return 0;
}
