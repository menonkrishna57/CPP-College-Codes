#include <iostream>
    using namespace std;
    int main(){
        int i,c;
    int arr[100];
    for ( i=0;i<=3;i++)
    {
        cin>>arr[i];
        
    }
    c=arr[0];
    for(int i=0;i<=3;i++)
    {
        c= arr[i]<c?arr[i]:c;
    }
    cout<<c;
    
    return 0;
    }