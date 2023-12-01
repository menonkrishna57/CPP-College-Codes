#include <iostream>
using namespace std;

int fibonacci(int x)
{
    if(x==1||x==0)
    {
        return x;
    }
    else{
        return fibonacci(x-2)+fibonacci(x-1);
    }
}
int main()
{
    int n=10;
    for(int i=0;i<10;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}