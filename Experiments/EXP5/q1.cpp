#include <iostream>
using namespace std;
int main()
{
    char a1='A';
    for(int i=1;i<=5;i++)
    {
        for(int v=1;v<=i;v++)
        {
            cout<<a1;
            a1++;
        }
        cout<<endl;
    }

}
