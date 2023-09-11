#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    for(int i=3;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}