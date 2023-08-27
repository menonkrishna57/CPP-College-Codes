#include <iostream>
using namespace std;
int main()
{
    int x,y,result=1;
    cout<<"Enter Base: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    for(int i=1;i<=y;i++)
    {
        result*=x;
    }
    cout<<x<<"^"<<y<<"="<<result;
}
