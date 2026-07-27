#include<iostream>
using namespace std;
int main()
{ int num,revnum=0,no,original;
 cout<<"enter value of num: \n";
 cin>>num;
 original=num;
 while(num>0)
 {
 no=num%10;
 num=num/10;
 revnum=revnum*10+no;
 }
 cout<<"revnum: "<<revnum;
 
 if(revnum==original)
     cout<<" is palindrome";
 else
     cout<<" is not palindrome";
 return 0;
 }
 
