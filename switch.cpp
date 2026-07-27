#include<iostream>
using namespace std;
int main()
{
int choice,num1,num2;
cout<<"enter num1: ";
cin>>num1;
cout<<"enter num2: ";
cin>>num2;

cout<<"enter your choice: ";
cout<<"1.addition\n"<<"2.substract\n"<<"3.multiplication";
cin>>choice;

switch(choice)
{
case 1:
cout<<"addition:num1+num2: "<<num1+num2;
break;

case 2:
cout<<"substract:num1-num2: "<<num1-num2;
break;

case 3:
cout<<"substract:num1*num2: "<<num1*num2;
break;
}
return 0;
}
