/* WAP to input two variable and swap there value without using third variable*/
#include<iostream>
using namespace std;
int main()
{ int a,b;
 cout<<"Enter value of a";
 cin>>a;
 cout<<"Enter value of b";
 cin>>b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"Swapping without thired variable"<<a<<"\n"<<b;
 return 0;	
}
