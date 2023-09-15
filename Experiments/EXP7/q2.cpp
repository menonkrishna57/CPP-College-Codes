//Write a function that takes two integer parameters x & y, and returns the result XY (Don’t use pow( ))
#include <iostream>
using namespace std;
int mypower(int x,int y)
{
    int res=1;
    for(int i=0;i<y;i++)
    {
        res*=x;
    }
    return res;
}
int main()
{
    int x,y;
    cout<<"Enter Base: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    cout<<x<<"^"<<y<<"="<<mypower(x,y);
}
