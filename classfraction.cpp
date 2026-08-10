#include<iostream>
using namespace std;
class fraction
{ 
 public:
   int nume,deno;
   
   void input()
   {
     cout<<"enter numrator: ";
     cin>>nume;
     cout<<"enter denominator: ";
     cin>>deno;
     
   }
   
   void add(fraction f1,fraction f2)
   {
     nume=(f1.nume*f2.deno)+(f2.nume*f1.deno);
     deno=(f1.deno*f2.deno);
    }
    void sub(fraction f1,fraction f2)
   {
     nume=(f1.nume*f2.deno)-(f2.nume*f1.deno);
     deno=(f1.deno*f2.deno);
    }
    void display()
  {
    cout<<nume<<"/"<<deno<<endl;
    }
};
int main()
{
  fraction f1,f2,f3;
  
  cout<<"Enter first fraction:\n";
  f1.input();
  cout<<"Enter second fraction:\n";
  f2.input();
  cout<<"addition : "<<endl;
  f3.add(f1,f2);
  f3.display();
  cout<<"substraction : "<<endl;
  f3.sub(f1,f2);
  f3.display();
  
  return 0;
  
 }
 
