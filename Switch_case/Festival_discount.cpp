/* Festival Discount Offer */
#include <iostream>
using namespace std;

int main()
{
    float amount;
    int c;

    cout << "Enter product price : ";
    cin >> amount;

    cout << "---- Festival Discount Offer ----";
    cout << "\n1. Diwali : 30 percent off";
    cout << "\n2. Holi : 25 percent off";
    cout << "\n3. Christmas : 5 percent off";
    cout << "\n4. New Year : 2.5 percent off";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
            amount = amount - (amount * 0.30);
            cout << "\nTotal Price : " << amount;
            break;

        case 2:
            amount = amount - (amount * 0.25);
            cout << "\nTotal Price : " << amount;
            break;

        case 3:
            amount = amount - (amount * 0.05);
            cout << "\nTotal Price : " << amount;
            break;

        case 4:
            amount = amount - (amount * 0.025);
            cout << "\nTotal Price : " << amount;
            break;

        default:
            cout << "\nInvalid choice";
    }

    return 0;
}
