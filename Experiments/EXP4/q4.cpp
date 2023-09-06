#include <iostream>
using namespace std;
int main()
{
    int n, pos=0, neg=0, zero=0;
    string c;

    do
    {
        cout << "Enter the number: ";
        cin >> n;
        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        cout << "Type \'Y\' to stop: ";
        cin >> c;
    } while (c != "Y");
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zero: " << zero << endl;
    return 0;
}