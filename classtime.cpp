#include<iostream>
using namespace std;
class Time
{ 
   int hour,min,sec;
   public: 
   void accept()
   {
    cin>>hour>>min>>sec;
   }
   
   void add(Time t1,Time t2)
   {
     sec=t1.sec+t2.sec;
     min=t1.min+t2.min;
     hour=t1.hour+t2.hour;
     
     if(sec>=60)
     {
       sec=sec-60;
       min++;
     }
     
     if(min>=60)
     {
       min=min-60;
       hour++;
     }
    }
    void display()
   {
     cout<<hour<<":"<<min<<":"<<sec;
    }

};
int main()
{
  Time t1,t2,t3;
  
  cout<<"Enter first time(HH MM SS): ";
  t1.accept();
  
  cout<<"Enter second time(HH MM SS): ";
  t2.accept();

  t3.add(t1,t2);
  
  cout<<"result : ";
  t3.display();

  return 0;
  
 }
 
