/* check it is leap year or not */
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year:";
	cin>>year;
	if(year%400==0||year%100==1||year%4==0)	
	 cout<<"Leap year";
	else 
     cout<<"Not leap year";
	return 0; 
}
