#include<iostream>
using namespace std;
int main()
{
    int c,r=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>c;
    int arr[c],rev[c];
    for(int i=0;i<c;i++)
    {
        cout<<"Enter the value:";
        cin>>arr[i];
    }
    for(int i=c-1;i>=0;i--)
    {
        rev[r++]=arr[i];
    }
    for(int i=0;i<c;i++)
    {
        cout<<rev[i]<<",";
    }
}
