#include<iostream>
using namespace std;
int main()
{
    int i,n,num,r,sum=0,m;
    cout<<"ENTER A NUMBER ";
    cin>>n;
    num =n;
    while (n!=0)
    {
        r=n%10;
        m=1;
        for (i=1;i<=r;i++)
        {
            m=m*i;
        }
        sum = sum + m;
        n = n/10;
    }
    if (num==sum)
    {
        cout<<"THE NUMBER IS STRONG";
    }
    else
    {
        cout<<"THE NUMBER IS NOT STRONG";
    }
    return 0;

}

