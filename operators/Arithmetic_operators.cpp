/* Arithmetic operators */
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum,sub,multi,div,mod;
    cout<<"Enter number1:";
    cin>>n1;
    cout<<"Enter number2:";
    cin>>n2;
	sum=n1+n2;
	multi=n1*n2;
	sub=n1-n2;
	div=n1/n2;
	mod=n1%n2;
    cout<<"\n Sum is "<<sum;
	cout<<"\n Multiples is "<<multi;
	cout<<"\n Subtraction is "<<sub;
	cout<<"\n Division is "<<div;
	cout<<"\n Modulus is "<<mod;
	return 0;	
}
