#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n3,n4,n5;
double sum=0;
double avg=0;
cout<<"Enter the first Number";
cin>>n1;
cout<<"Enter the second Number";
cin>>n2;
cout<<"Enter the thirdNumber";
cin>>n3;
cout<<"Enter the fourth Number";
cin>>n4;
cout<<"Enter the fifth Number";
cin>>n5;
sum=n1+n2+n3+n4+n5;
avg=sum/5;
cout<<"Average of numbers="<<avg;
return 0;
}
