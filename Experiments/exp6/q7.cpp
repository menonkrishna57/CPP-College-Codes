#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<<"M:";
    cin>>m;
    cout<<"N:";
    cin>>n;
    int a[m][n],b[m][n],sum[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value:";
            cin>>a[i][j];
        }

    }
    cout<<"Enter the second array: "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value:";
            cin>>b[i][j];
        }

    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    }
    for(int i=0;i<m;i++)
    {
        cout<<'[';
        for(int j=0;j<n;j++)
        {
            cout<<sum[i][j]<<'\t';
        }
        cout<<']'<<endl;

    }
}
