#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int a[2][2];
    for(int i=0;i<2;i++)
    {
        for(int v=0;v<2;v++)
        {
            cout<<"Enter the value:";
            cin>>a[i][v];
        }

    }
    for(int i=0;i<2;i++)
    {
        for(int v=0;v<2;v++)
        {
            sum+=a[i][v];
        }

    }
    cout<<"Sum is: "<<sum;
}
