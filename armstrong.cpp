#include<iostream>
#include<cmath>
using namespace std;

int main()

{
int num,original,reaminer,digits=0;
int sum=0;
cout<<"Enter a number:";
cin>>num;
original=num;


while(original !=0)
{
digits++;
original=original/10;
}
original=num;

while(original!=0)
{
reaminer=original % 10;
sum=sum            + pow (reaminer,digits);
original=original/10;
}
if (sum==num)
cout<<num<<"is an Armstrong number."<<endl;
else
cout<<num<<"is not an Armstrong number."<<endl;
return 0;
}

 
