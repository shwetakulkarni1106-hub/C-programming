#include<iostream>
using namespace std;

class Student
{
  protected:
  int roll;
  char name[20];
  
  public:
   void getdata()
   { 
    cout<<"enter your rollno: ";
    cin>>roll;
    cout<<"Enter your name: ";
    cin>>name;
   }
   
   void putdata()
   {
     cout<<"roll_no: "<<roll;
     cout<<"name: "<<name<<endl;
    }
  };
   
   class StudentExam:public Student
   {
    protected:
    int sub1,sub2,sub3,sub4,sub5;
    float percentage;
    
    public:
    void accept_data()
    {
     getdata();
     cout<<"enter marks subject1: ";
     cin>>sub1;
     cout<<"enter marks subject2: ";
     cin>>sub2;
     cout<<"enter marks subject3: ";
     cin>>sub3;
     cout<<"enter marks subject4: ";
     cin>>sub4;
     cout<<"enter marks subject5: ";
     cin>>sub5;
     }
     void display_data()
     {
     putdata();
     cout<<"\n Marks of subject1: "<<sub1;
     cout<<"\n Marks of subject2: "<<sub2;
     cout<<"\n Marks of subject3: "<<sub3;
     cout<<"\n Marks of subject4: "<<sub4;
     cout<<"\n Marks of subject5: "<<sub5;
     }
  };
   
   class StudentResult:public StudentExam
   {
   public:
   void calculate()
   {
     percentage=(sub1+sub2+sub3+sub4+sub5)/5.0;
     cout<<"\nTotal Percentage: "<<percentage;
    }
 };
   
   int main()
   {
    StudentResult str;
    int Nostu,i;
    cout<<"\n Enter no.of student: ";
    cin>>Nostu;
    for(i=0;i<Nostu;i++)
    {
      str.accept_data();
      str.display_data();
      str.calculate();
      }
      return 0;
      }
      
