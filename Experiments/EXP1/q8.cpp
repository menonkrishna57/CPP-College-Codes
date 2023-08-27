#include <iostream>
using namespace std;
int main()
{
    int s,m,r;
    cin>>r;
    while(r>0)
    {
        m=r%10;
        s=s*10+m;
        r=r/10;
    }
    cout<<"Reverse is: "<<s;
}