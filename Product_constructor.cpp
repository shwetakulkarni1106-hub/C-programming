#include<iostream>
using namespace std;

class Product
{
  int productID;
  string name;
  float price;
  
  public:
  //Default constructor
  Product()
   { 
     productID=0;
     name="unknown";
     price=0;
   }
   
   //parameterized constructor
  Product(int id,string n,float p)
   {
     productID=id;
     name=n;
     price=p;
    }
    
    //copy constructor
    Product(Product &p)
    {
     productID=p.productID;
     name=p.name;
     price=p.price;
    }
    
    void display()
    {
      cout<<"Product ID: "<<productID<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Price: "<<price<<endl;
    }
 };
 int main()
   {
    Product p1;
     cout<<"Default constructor: "<<endl;
     p1.display();
     
    Product p2(10,"Mobile",60000);
     cout<<"\nParameterize constructor:  "<<endl;
     p2.display();
     
   Product p3(p2);
     cout<<"\ncopy constructor: "<<endl;
     p3.display();
     
     return 0;
  }   
     
