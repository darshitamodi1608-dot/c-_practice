/* check it is profit or loss */
#include<iostream>
using namespace std;
int main()
{
	float cp,sp;
	cout<<"Enter cost price:";
	cin>>cp;
	cout<<"Enter selling price:";
	cin>>sp;
	if(sp>cp)	
	 cout<<"profit: %.2f"<<sp-cp;
	else 
     cout<<"loss: %.2f"<<cp-sp;
	return 0; 
}
