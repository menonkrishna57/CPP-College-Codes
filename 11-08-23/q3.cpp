//Implement a program to accept a year as input and print whether it is a leap. 
//A year is a leap if divisible by 4, and centennial years (years divisible by 100) 
//are leap years only when divisible by 400. 

#include <iostream>
using namespace std;
int main()
{
    int y1;
    cout<<"Enter Year: ";
    cin>>y1;
    if (y1>=0)
        {
        if (y1%4==0)
        {
            cout<<"Leap Year"<<endl;

        }
        else
        {
            cout<<"Not a Leap Year"<<endl;
        }
    }
    else
    {
        cout<<"Invalid Year";
    }
}
