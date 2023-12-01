#include <iostream>
using namespace std;

int GCD_cal(int a1, int a2)
{
    int gcd = 1;
    for (int i = 1; i <= a1 && i <= a2; i++)
    {
        if (a1 % i == 0 && a2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcd = GCD_cal(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}