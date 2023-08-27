#include <iostream>
using namespace std;
int main()
{
    int n=0,mysum=0;
    int i=1;
    cout<<"Enter Number:";
    cin>>n;
    while(i<=n)
    {
        mysum+=2*i;
        i++;
    }
    cout<<"Sum is: "<<mysum;
    return 0;
}
