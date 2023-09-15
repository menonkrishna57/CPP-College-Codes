#include <iostream>
using namespace std;
int largest(int num[3])
{
    int mymax=num[0];
    for(int i=1;i<3;i++)
    {
        if(num[i]>mymax)
        {
            mymax=num[i];
        }
    }
    return mymax;
}
int main()
{
    int num[3];
    for(int i=0;i<3;i++)
    {
            cout<<"Enter Number: ";
            cin>>num[i];
    }
    cout<<"Largest is "<<largest(num);
}
