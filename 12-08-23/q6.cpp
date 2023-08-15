#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a,b,c,d;
    float root1,root2;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if (d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
    }
    else if(d==0)
    {
        root1=(-b)/(2*a);
        root2=root1;
    }
    else
    {
        root1=((-b)/(2*a))+(sqrt(-d)/(2*a));
        root2=((-b)/(2*a))-(sqrt(-d)/(2*a));
    }
    cout<<root1<<endl<<root2;
}