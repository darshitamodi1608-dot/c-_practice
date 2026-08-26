/*Minimum Purchase for free delivery*/
#include<iostream>
using namespace std;
int main()
{	int value;
	cout<<"Enter cart value: ";
	cin>>value;
	if(value>=500)
	cout<<"  You are eligible for free delivery";
	else
	cout<<"  Add more items to get free delivery";
	return 0;
}
