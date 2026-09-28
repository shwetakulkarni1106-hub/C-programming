#include<iostream>
using namespace std;
class Number
{
int x;

public:
Number()
{  
  x=0;
}
Number(int a)
{ 
  x=a;
}
Number operator+(Number n2)
{
 Number temp;
 cout<<x<<endl;
 temp.x=x+n2.x;
 return temp;
 }
 void display()
 {
 cout<<"Numbers: "<<x<<endl;
 }
};
int main()
{
Number n1(10);
Number n2(20);
Number n4(50);

Number n3;
n3=n1+n2+n4;
n3.display();
return 0;
}
