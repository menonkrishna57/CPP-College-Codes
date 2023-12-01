#include <iostream>
using namespace std;
int main()
{
    int w=10;
    char a[100]="Example";
    char *v=&a[0];
    int *k=&w;
    cout<<*k<<endl<<v;
}