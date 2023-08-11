#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;
    int n1;
    n1=int(ch);
    if (n1>=65 && n1<=96)
    {
        cout<<"Capital Letter"<<endl;
        n1+=32;
    }
    else
    {
        cout<<"Lower Letter"<<endl;
        n1-=32;
    }
    ch=char(n1);
    cout<<"Changed character: "<<ch;
    return 0;
}