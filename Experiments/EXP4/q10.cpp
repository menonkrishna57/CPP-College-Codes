#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Printing leap years:"<<endl;
    
    for(int i=1;i<=n;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        {
            cout<<i<<endl;
        }
    }
}