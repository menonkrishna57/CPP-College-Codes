#include<iostream>
using namespace std;
int main()
{
    int n=1234;
    cout<<n%10;
    cout<<(n%100-n%10)/10;
    cout<<(n%1000-n%100)/100;
    cout<<(n%10000-n%1000)/1000;
}