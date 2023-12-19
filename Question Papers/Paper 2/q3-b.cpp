#include <iostream>
using namespace std;
int main()
{
    char a='E';
    for(int i='A';i<=a;i++)
    {
        for(int j='A';j<=i;j++)
        {
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
}