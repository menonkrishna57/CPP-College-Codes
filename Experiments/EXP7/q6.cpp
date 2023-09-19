/*Write user defined function “search” to search element is present in 1D array or not.
Search function accepts array and key to search as parameters. */

#include <iostream>
using namespace std;
bool mysearch(int arr[],int len,int s)
{

    for(int i=0;i<len;i++)
    {
        if(arr[i]==s)
        {
            return true;

        }
    }
    return false;
}

int main()
{
    int n,s;
    cout<<"Enter the Number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number:";
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find: ";
    cin>>s;
    if(mysearch(arr,n,s))
    {
        cout<<"Number found";
    }
    else{
        cout<<"Number not found";
    }
}
