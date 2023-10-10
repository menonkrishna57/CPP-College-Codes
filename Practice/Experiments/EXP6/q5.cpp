#include <iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    int arr[5][5]={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of the elements of the array is: "<<sum;
    
}