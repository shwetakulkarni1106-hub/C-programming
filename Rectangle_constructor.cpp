#include<iostream>
using namespace std;

class Rectangle
{
  int length;
  int breadth;
  
  public:
  //Default constructor
   Rectangle()
   { 
     length=0;
     breadth=0;
   }
   
   //parameterized constructor
   Rectangle(int l,int b)
   {
     length=l;
     breadth=b;
    }
    
    //copy constructor
    Rectangle(Rectangle &r)
    {
     length=r.length;
      breadth=r.breadth;
    }
    
    void area()
    {
      cout<<"area: "<<length*breadth<<endl;
    }
 };
 int main()
   {
    Rectangle r1;
     cout<<"Default constructor: "<<endl;
     r1.area();
     
    Rectangle r2(10,4);
     cout<<"\nParameterize constructor:  "<<endl;
     r2.area();
     
    Rectangle r3(r2);
     cout<<"\ncopy constructor: "<<endl;
     r3.area();
     
     return 0;
  }   
     
