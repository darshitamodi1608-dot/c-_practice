/* Recharge Plans */
#include <iostream>
using namespace std;

int main()
{
    int c;

    cout << "---- RECHARGE PLANS ----";
    cout << "\n1. Rs 199 (1.5GB/day, 28 days)";
    cout << "\n2. Rs 399 (2GB/day, 56 days)";
    cout << "\n3. Rs 599 (3GB/day, 84 days)";
    cout << "\n4. Rs 999 (Unlimited Data, 365 days)";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
            cout << "\nPlan Details: 1.5GB/day, Validity: 28 days";
            break;

        case 2:
            cout << "\nPlan Details: 2GB/day, Validity: 56 days";
            break;

        case 3:
            cout << "\nPlan Details: 3GB/day, Validity: 84 days";
            break;

        case 4:
            cout << "\nPlan Details: Unlimited Data, Validity: 365 days";
            break;

        default:
            cout << "\nInvalid choice";
    }

    return 0;
}
