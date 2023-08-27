//Given the value of x, y, and z. Write a program to rotate their values such that x has value of y, y has value of z and z has value of x.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,z;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    z=a;
    a=c;
    c=b;
    b=z;
    cout<<a<<endl<<b<<endl<<c;
}