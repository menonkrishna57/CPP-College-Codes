#include <iostream>
using namespace std;
int main()
{
    int m,n,mysum=0;
    cout<<"Enter M: ";
    cin>>m;
    cout<<"Enter N: ";
    cin>>n;
    m+=1;
    while(m<n)
    {
        mysum+=m;
        m++;
    }
    cout<<"Sum is: "<<mysum;
    return 0;
}
