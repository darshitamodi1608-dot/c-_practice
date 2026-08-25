/*Increment and Decrement operator*/
#include<iostream>
using namespace std;
int main()
{ int a;
  cout<<"Enter number1:";
  cin>>a;
  cout<<"\nIncrement of a = "<<(a++);
  cout<<"\nDecrement of a = "<<(a--);
  cout<<"\nIncrement of a = "<<(++a);
  cout<<"\nDecrement of a = "<<(--a);
  return 0;	
}
