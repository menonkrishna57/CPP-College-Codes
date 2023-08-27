
#include <iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter Number: ";
    cin>>n;
    do
    {
        sum+=n%10;
        n/=10;

    }while(n!=0);
    cout<<sum;
}
