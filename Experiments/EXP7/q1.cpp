#include <iostream>
using namespace std;
bool isleap(int year)
{
    if(year%4==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int year;
    cout<<"Enter Year: ";
    cin>>year;

    if(isleap(year))
    {
        cout<<year<<" is leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
}
