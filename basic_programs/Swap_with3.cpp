/* WAP to input two variable and swap there value with using third variable*/
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
 cout<<"Enter value of a";
 cin>>a;
 cout<<"Enter value of b";
 cin>>b;
 c=a;
 a=b;
 b=c;
 cout<<"Swapping with thired variable"<<a<<"\n"<<b;
 return 0;	
}
