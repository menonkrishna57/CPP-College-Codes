//Write a program to print the entire uppercase and lowercase letters using a loop (use continue statement).
#include <iostream>
using namespace std;
int main()
{
    char i;
    for (i='A';i>='A' && i<='z';i++)
    {
        
        if(i>'Z' && i<'a')
        {
            continue;
        }
        else{
        cout<<i<<endl;}
    }
}