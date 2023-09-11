//*Develop a program to find sum of elements of lower triangular matrix of order MxN.
#include <iostream>
using namespace std;
int main()
{
    int sum=0,m=0,n=0;

    cout<<"M:";
    cin>>m;
    cout<<"N:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value:";
            cin>>a[i][j];
        }

    }

    for (int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum+=a[i][j];
        }
    }

    cout<<"Sum is: "<<sum;



}
