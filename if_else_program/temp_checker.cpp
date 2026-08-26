/*check the temperature is normal or not*/
#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter the current temperature: ";
	cin>>temp;
	if(temp>40)
	cout<<"Heat alert";
	else
	cout<<"Temperature is normal";
	return 0;
}
