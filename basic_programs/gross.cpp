/* WAP to input rate and Quantity of an item and also input discount. 
Print there gross bill and net bill. */
#include<iostream>
using namespace std;
int main()
{  int rate,Qty,gross;
   float discount,net;
   cout<<"Enter rate of gloss";
   cin>>rate;
   cout<<"enter quantity of gloss";
   cin>>Qty;
   cout<<"Enter discount amount";
   cin>>discount;
   gross=rate*Qty;
   net=gross-discount;
   cout<<"\n Gross bill :"<< gross;
   cout<<"\n Net bill : "<< net;
   return 0;	
}
