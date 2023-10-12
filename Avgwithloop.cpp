#include <iostream>
using namespace std;
int main() {
    int n,i,no;
    float sum=0,avg=0;
    cout<<"Enter the number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the number"<<(i+1);
        cin>>no;
        sum=sum+no;
    }
avg=sum/n;
cout<<"Average of"<<n<<"Numbers="<<avg;
    return 0;
}
