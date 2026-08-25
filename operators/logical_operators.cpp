/* Logical operators */
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter number1:";
    cin>>a;
    cout<<"Enter number2:";
    cin>>b;
	cout<<"\nLogical AND (a > 0 && b > 0) = "<<( a > 0 && b > 0);
    cout<<"\nLogical OR  (a > 0 || b > 0) = "<<( a > 0 || b > 0);
    cout<<"\nLogical NOT !(a > 0) = "<< (!(a > 0));
	return 0;	
}
