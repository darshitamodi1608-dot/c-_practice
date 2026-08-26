/*Discount offer*/
#include<iostream>
using namespace std;
int main()
{
	float bill;
	cout<<"Enter the bill amount: ";
	cin>>bill;
	if(bill>1000)
	cout<<" Final bill after discount: "<<bill*0.9;
	else
	cout<<" Final bill after discount:"<<bill;
	return 0;
}
