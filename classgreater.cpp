#include<iostream>
using namespace std;
class largest
{ 
 public:
   int a,b;
   
   void input()
   {
     cout<<"enter value of a: ";
     cin>>a;
     cout<<"enter value of b: ";
     cin>>b;
   }
   
   void display()
   {
     if(a>b)
       {
       cout<<"a is greater than b";
       }
     else
     {
       cout<<"b is greater than a";
       }
    }                                                                                                                                                                         
};
int main()
{
  largest l;
  l.input();
  l.display();
  
  return 0;
  
    
 }
 
