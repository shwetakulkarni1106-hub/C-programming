#include<iostream>
using namespace std;

class Box
{
  int length;
  int breadth;
  int height;
  
  public:
  //Default constructor
   Box()
   { 
     length=0;
     breadth=0;
     height=0;
   }
   
   //parameterized constructor
   Box(int l,int b,int h)
   {
     length=l;
     breadth=b;
     height =h;
    }
    
    //copy constructor
    Box(const Box &b)
    {
     length=b.length;
     breadth=b.breadth;
     height=b.height;
      
    }
    
    void volume()
    {
      cout<<"length: "<<length<<endl;
      cout<<"breadth: "<<breadth<<endl;
      cout<<"Height: "<<height<<endl;
      cout<<"Volume: "<<length*breadth*height<<endl;
    }
 };
 int main()
   {
    Box b1;
     cout<<"Default constructor: "<<endl;
     b1.volume();
     
    Box b2(10,5,4);
     cout<<"\nParameterize constructor:  "<<endl;
     b2.volume();
     
    Box b3(b2);
     cout<<"\ncopy constructor: "<<endl;
     b3.volume();
     
     return 0;
  }   
     
