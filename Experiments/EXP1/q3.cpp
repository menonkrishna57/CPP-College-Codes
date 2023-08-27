#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"1st Number: "<<n1<<endl;
    cout<<"2nd Number: "<<n2<<endl;
}