#include<iostream>
using namespace std;

class Employee
{
  int id;
  string name;
  float salary;
  
  public:
  //Default constructor
   Employee()
   { 
     id=0;
     name="unkown";
     salary=0;
   }
   
   //parameterized constructor
   Employee(int i,string n,float s)
   {
     id=i;
     name=n;
     salary=s;
    }
    
    //copy constructor
    Employee(const Employee &e)
    {
      id=e.id;
      name=e.name;
      salary=e.salary;
    }
    
    void display()
    {
      cout<<"Employee ID: "<<id<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Salary: "<<salary<<endl;
    }
 };
 int main()
   {
     Employee e1;
     cout<<"Default constructor: "<<endl;
     e1.display();
     
     Employee e2(10,"sai",70000);
     cout<<"\nParameterize constructor:  "<<endl;
     e2.display();
     
     Employee e3(e2);
     cout<<"\ncopy constructor: "<<endl;
     e3.display();
     
     return 0;
  }   
     
