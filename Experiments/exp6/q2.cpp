#include <iostream>
using namespace std;
int main()
{
    int c,evenc=0,oddc=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>c;
    int arr[c],even[c],odd[c];
    for(int i=0;i<c;i++)
    {
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    for(int i=0;i<c;i++)
    {
        if(arr[i]%2==0)
        {
            even[evenc++]=arr[i];
        }
        else{
            odd[oddc++]=arr[i];
        }
    }
    cout<<"Even Numbers:"<<endl;
    for(int i=0;i<evenc;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl<<"Odd Numbers:"<<endl;

    for(int i=0;i<oddc;i++)
    {
        cout<<odd[i]<<" ";
    }
}
