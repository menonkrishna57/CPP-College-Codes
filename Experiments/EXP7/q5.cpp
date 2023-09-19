#include <iostream>
using namespace std;
int rev(int n)
{
    int s=0,m=0;
    while(n>0)
    {
        m=n%10;
        s=s*10+m;
        n=n/10;
    }
    return s;
}
int mycount(int n)
{
    int counter=0;
    while(n>0)
    {
        n=n/10;
        counter++;
    }
    return counter;
}
int mysum(int n)
{
    int sum=0;

    do
    {
        sum+=n%10;
        n/=10;

    }while(n!=0);
    return sum;
}

int main()
{
    int num,option;
    cout<<"1.Sum of Digits\n2.Reverse of a number\n3.Count Number of Digits"<<endl;
    cin>>option;
    cout<<"Enter Number: ";
    cin>>num;
    switch(option)
    {
    case 1:
        cout<<"Sum is: "<<mysum(num);
        break;

    case 2:
        cout<<"Reverse is: "<<rev(num);
        break;

    case 3:
        cout<<"Number of digits is: "<<mycount(num);
        break;
    }
    default:
        cout<<"Invalid Option";
        break;
}
