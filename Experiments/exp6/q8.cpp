#include <iostream>
using namespace std;
int main()
{
    int largest=0;
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter the value: ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(largest<a[i][j])
            {
                largest=a[i][j];
            }
        }
    }
    cout<<"Largest is "<<largest;
}
