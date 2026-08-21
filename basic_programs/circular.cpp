/* WAP to input three variable and circulary shift*/
#include<iostream>
using namespace std;
int main()
{ int a,b,c,d;
 cout<<"Enter value of a";
 cin>>a;
 cout<<"Enter value of b";
 cin>>b;
 cout<<"Enter value of c";
 cin>>c;
 d=a;
 c=b;
 b=a;
 a=d;
 cout<<"Circulary"<<a<<"\n"<<b<<"\n"<<c;
 return 0;	
}
