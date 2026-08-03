#include<iostream>
using namespace std;
class num
{ 
 public:
   int a;
   
   void input()
   {
     cout<<"enter value of a: ";
     cin>>a;
   }
   
   void display()
   {
     if(a%2==0)
       {
       cout<<"a is even";
       }
     else
     {
       cout<<"a is odd";
       }
    }                                                                                                                                                                         
};
int main()
{
  num l;
  l.input();
  l.display();
  
  return 0;
  
    
 }
 
