#include<iostream>
using namespace std;
inline float SI(float p, float r,float t)
{
  return(p*r*t)/100;
}
int main()
{
  
  float p=5000;
  float r=6;
  float t=3;
  
  cout<<"simple interest: "<<SI(p, r, t);
  
  return 0;
}   
