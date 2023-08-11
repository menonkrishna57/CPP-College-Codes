#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter a number: ";
    cin>>n1;
    if (n1%3==0&&n1%5==0)
    {
        cout<<"BOTH";

    }
    else if(n1%3==0&&n1%5!=0)
    {
        cout<<"THREE";

    }
    else if(n1%3!=0&&n1%5==0)
    {
        cout<<"FIVE";
    }
    else
    {
        cout<<"NOT";
    }
    
    return 0;
}