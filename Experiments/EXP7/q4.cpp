#include <iostream>
using namespace std;
int factorial(int n)
{
    int result=1;
    for(int i=n;i>0;i--)
    {
        result*=i;
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Factorial is: "<<factorial(n);
}
