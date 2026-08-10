#include<iostream>
using namespace std;
class complex
{ 
 public:
   int real,imag;
   
   void input()
   {
     cout<<"enter real part: ";
     cin>>real;
     cout<<"enter imaginary part: ";
     cin>>imag;
     
   }
   
   void add(complex c1,complex c2)
   {
     real=c1.real+c2.real;
     imag=c1.imag+c2.imag;
    }
    void sub(complex c1,complex c2)
   {
     real=c1.real-c2.real;
     imag=c1.imag-c2.imag;
    }
    void display()
  {
    cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
  complex c1,c2,c3,c4;
  
  cout<<"Enter first complex number:\n";
  c1.input();
  cout<<"Enter second complex number:\n";
  c2.input();
  cout<<"addition : "<<endl;
  c3.add(c1,c2);
  c3.display();
  cout<<"substraction : "<<endl;
  c3.sub(c1,c2);
  c3.display();
  
  return 0;
  
 }
 
