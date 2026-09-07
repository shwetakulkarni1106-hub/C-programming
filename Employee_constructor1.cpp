#include<iostream>
using namespace std;

class Employee
{
  int id;
  string name;
  float salary;
  double HRA;
  double DA;
  float grosssalary;
  
  public:
  //Default constructor
   Employee()
   { 
     id=0;
     name="unkown";
     salary=0;
     HRA=0;
     DA=0;
     grosssalary=0;
     
   }
   
   //parameterized constructor
   Employee(int i,string n,float s)
   {
     id=i;
     name=n;
     salary=s;
     HRA=salary*0.20;
     DA=salary*0.10;
     grosssalary=salary+HRA+DA;
    }
    
    //copy constructor
    Employee(const Employee &e)
    {
      id=e.id;
      name=e.name;
      salary=e.salary;
      HRA=e.HRA;
      DA=e.DA;
      grosssalary=e.grosssalary;
    }
    
    void display()
    {
      cout<<"Employee ID: "<<id<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Salary: "<<salary<<endl;
      cout<<"HRA: "<<HRA<<endl;
      cout<<"DA: "<<DA<<endl;
      cout<<"grosssalary: "<<grosssalary<<endl;
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
     
