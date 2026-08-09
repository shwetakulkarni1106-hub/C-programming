#include<iostream>
using namespace std;
void swap(int a, int b)
{
  int temp=a;
  a=b;
  b=temp;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;
  
}
int main()
{
  swap(10,20);
  
  return 0;
}   
