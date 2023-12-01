#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m=n;
    while(m>0)
    {
        for(int i=0;i<(n-m)/2;i++)
        {
            cout<<" ";
        }
        for(int i=0;i<m;i++)
        {
            cout<<"*";
        }
        for(int i=0;i<(n-m)/2;i++)
        {
            cout<<" ";
        }
        cout<<endl;
        m-=2;
    }
}