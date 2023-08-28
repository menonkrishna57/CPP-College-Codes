#include <iostream>
using namespace std;
int main()
{
    int n=0,mysum=0;
    int i=1;
    cout<<"Enter Number:";//taking input
    cin>>n;
    while(i<=n)
    {
        mysum+=2*i;//adding 2*i to mysum
        i++;
    }
    cout<<"Sum is: "<<mysum;//printing mysum
    return 0;
}
