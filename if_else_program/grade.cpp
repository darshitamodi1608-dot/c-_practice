/* WAP to do grade calculation */
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter marks:";
	cin>>marks;
	if(marks>=95)	
	 cout<<"GRADE A";
	else 
     if(marks>=85)	
	 cout<<"GRADE B";
   	else
	 if(marks>=75)	
	 cout<<"GRADE C";
	else
	 if(marks>=35)	
	 cout<<"GRADE D";
	else	
	 cout<<"FAIL";
	return 0; 
}
