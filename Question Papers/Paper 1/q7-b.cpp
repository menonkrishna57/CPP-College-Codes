#include <iostream>
using namespace std;
int main()
{
    int n=15;
    int age,tod=0,sch=0,adu=0;
    while(n>0)
    {
        cout << "Enter age: ";
        cin >> age;
        switch(age)
        {
            case 0 ... 5:
                tod++;
                break;
            case 6 ... 17:
                sch++;
                break;
            default:
                adu++;
        }
        n-=1;
    }
    cout << "Number of Toddlers: " << tod << endl;
    cout << "Number of School-age Children: " << sch << endl;
    cout << "Number of Adults: " << adu << endl;
}