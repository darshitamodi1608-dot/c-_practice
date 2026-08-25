/*Ternary operators*/
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
	cout<<"Enter number1:";
    cin>>a;
    cout<<"Enter number2:";
    cin>>b;
	c=a>b?a:b;
	cout<<"Largest is "<<c;
	return 0;
}
