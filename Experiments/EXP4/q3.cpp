#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,result=1;
    cout<<"Enter Base: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    /* for(int i=1;i<=y;i++) //*This is the long way of doing it
     {
         result*=x;
     }
     cout<<x<<"^"<<y<<"="<<result;*/
    cout<<x<<"^"<<y<<"="<<pow(x,y);//*This is the short way of doing it
}
