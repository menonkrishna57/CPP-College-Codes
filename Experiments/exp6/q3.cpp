#include<iostream>
using namespace std;
int main()
{

    int c;
    cout<<"Enter the number of elements in the array: ";
    cin>>c;
    int arr[c],copied[c];
    for(int i=0;i<c;i++)
    {
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    for(int i=0;i<c;i++)
    {
        copied[i]=arr[i];
    }
    for(int i=0;i<c;i++)
    {
        cout<<copied[i]<<" ";
    }
}
