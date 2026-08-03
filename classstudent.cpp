#include<iostream>
using namespace std;
class student
{ 
 public:
   string name;
   int rollno;
   
   void input()
   {
     cout<<"enter name: ";
     cin>>name;
     cout<<"enter rollno: ";
     cin>>rollno;
   }
   
   void display()
   {
     cout<<"\nname: "<<name<<endl;
     cout<<"rollno: "<<rollno<<endl;
    }
};
int main()
{
  student s;
  s.input();
  s.display();
  
  return 0;
  
    
 }
 
