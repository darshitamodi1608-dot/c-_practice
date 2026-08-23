/* check which number is largest in 3 number */
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter number 1:";
	cin>>n1;
	cout<<"Enter number 2 :";
	cin>>n2;
	cout<<"Enter number 3 :";
	cin>>n3;
	if(n1>n2 || n1>n3)	
	 cout<<"N1 is largest";
	else 
	 if(n2>n3)
	   cout<<"N2 is largest";
	 else
	   cout<<"N3 is largest";
	return 0; 
}
