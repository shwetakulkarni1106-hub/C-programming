#include<iostream>
using namespace std;
class fact
{ 
 public:
   int a;
   int fact=1;
   
   void input()
   {
     cout<<"enter value of a: ";
     cin>>a;
   }
   
   void display()
   {
     for(int i=1;i<=a;i++)
       fact=fact*i;
       cout<<fact;
    }
};
int main()
{
  fact a;
  a.input();
  a.display();
  
  return 0;
  
    
 }
 
