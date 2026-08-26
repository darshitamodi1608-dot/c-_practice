/* Electric bill charges*/
#include<iostream>
using namespace std;
int main()
{
	float bill;
	cout<<"Enter the bill amount: ";
	cin>>bill;
	if(bill>500)
	 { bill=bill+50;
	   cout<<" Final bill : "<<bill;
     }
	else
	 cout<<" Final bill : "<<bill;
	return 0;
}
