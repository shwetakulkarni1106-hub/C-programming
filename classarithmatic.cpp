#include<iostream>
using namespace std;
class arith
{ 
 public:
   int num1,num2,sum,sub;
  
   void input()
   {
     cout<<"enter value of num1: ";
     cin>>num1;
     cout<<"enter value of num2: ";
     cin>>num2;
   }
   
   void display()
   {
     cout<<"sum: "<<num1+num2<<endl;
     cout<<"sub: "<<num1-num2<<endl;
    }
};
int main()
{
  arith a;
  a.input();
  a.display();
  
  return 0;
  
    
 }
 
