#include <iostream>
#include <cstring>
using namespace std;
int power(int b,int e,int res=1)
{
    if (e==0)
    {
        return res;
    }
    else{
        res*=b;
        return power(b,e-1,res);
    }
}
int main()
{
    int base,exp;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>exp;
    cout<<base<<" raised to the power "<<exp<<" is "<<power(base,exp)<<endl;
}