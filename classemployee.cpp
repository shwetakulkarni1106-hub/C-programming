#include<iostream>
using namespace std;
class employee
{ 
 public:
   string name;
   int age;
   int salary;
   
   void input()
   {
     cout<<"enter name: ";
     cin>>name;
     cout<<"enter age: ";
     cin>>age;
     cout<<"enter salary: ";
     cin>>salary;
     
   }
   
   void display()
   {
     cout<<"\nname: "<<name<<endl;
     cout<<"age: "<<age<<endl;
     cout<<"salary: "<<salary<<endl;
     
    }
};
int main()
{
  employee s;
  s.input();
  s.display();
  
  return 0;
  
    
 }
 
