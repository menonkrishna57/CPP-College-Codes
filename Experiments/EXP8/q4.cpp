#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    cout<<"The values are: ";
    for(int i=0;i<5;i++)
    {
        cout<<*p;
        *p++;
    }
    return 0;
}