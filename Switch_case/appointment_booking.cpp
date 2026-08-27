/* Hospital Department Availability */
#include <iostream>
using namespace std;

int main()
{
    int c;

    cout << "---- Choose Department ----";
    cout << "\n1. General Physician";
    cout << "\n2. Cardiologist";
    cout << "\n3. Dermatologist";
    cout << "\n4. Neurologist";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
            cout << "\nGeneral Physician is available from 10 AM to 3 PM.";
            break;

        case 2:
            cout << "\nCardiologist is available from 11 AM to 4 PM.";
            break;

        case 3:
            cout << "\nDermatologist is available from 12 PM to 2 PM.";
            break;

        case 4:
            cout << "\nNeurologist is available from 6 AM to 6 PM.";
            break;

        default:
            cout << "\nInvalid choice";
    }

    return 0;
}
