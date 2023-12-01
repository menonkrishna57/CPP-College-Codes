#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    for(int i=4;i>=0;i--)
    {
        int *p=&a[i];
        cout<<*p;
    }
}