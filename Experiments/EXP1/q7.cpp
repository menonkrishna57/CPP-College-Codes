#include <iostream>
using namespace std;
int main()
{
    int s,m,r;
    cin>>r;
    while(r>0)
    {
        m=r%10;
        s=s+m;
        r=r/10;
    }
    cout<<"Sum is: "<<s;
}