#include <iostream>
using namespace std;
int main()
{
    int n=9,m=9;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<k;i++)
        {
            cout<<" ";
        }
        for(int i=0;i<m;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        m-=2;
        
    }

}