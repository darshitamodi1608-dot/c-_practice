/* Currency Converter */
#include <iostream>
using namespace std;

int main()
{
    float amount;
    int c;

    cout << "Enter amount in INR : ";
    cin >> amount;

    cout << "\n1. Convert to USD";
    cout << "\n2. Convert to Euro";
    cout << "\n3. Convert to Pound";
    cout << "\n4. Convert to Japanese Yen";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
            amount = amount * 0.012;
            cout << "\nConverted amount in USD : " << amount;
            break;

        case 2:
            amount = amount * 0.011;
            cout << "\nConverted amount in Euro : " << amount;
            break;

        case 3:
            amount = amount * 0.0095;
            cout << "\nConverted amount in Pound : " << amount;
            break;

        case 4:
            amount = amount * 1.68;
            cout << "\nConverted amount in Japanese Yen : " << amount;
            break;

        default:
            cout << "\nInvalid choice";
    }

    return 0;
}
