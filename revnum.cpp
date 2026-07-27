#include<iostream>
using namespace std;
int main()
{ int num,revnum=0;
 cout<<"enter value of num: ";
 cin>>num;
 while(num>0)
 { int no=num%10;
 num/=10;
 revnum=revnum*10+no;
 }
 cout<<"revnum: "<<revnum;
 }
 
