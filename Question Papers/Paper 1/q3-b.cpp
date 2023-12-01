// Prime Number
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool cond = true;
    cin >> n;
    if (n != 1)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                cout << "Not a Prime Number";
                cond = false;
                break;
            }
        }
        if (cond)
        {
            cout << "Prime Number";
        }
    }
}