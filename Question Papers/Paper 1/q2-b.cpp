#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store the input and count of each denomination
    int n, n100 = 0, n50 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    // Prompt the user to enter a value
    cout << "Enter N: ";
    cin >> n;

    // Calculate the count of each denomination
    while (n != 0)
    {
        if (n >= 100)
        {
            n -= 100; // Deduct ₹100 from the remaining value
            n100++;   // Increment the count of ₹100 notes
        }
        else if (n >= 50)
        {
            n -= 50; // Deduct ₹50 from the remaining value
            n50++;   // Increment the count of ₹50 notes
        }
        else if (n >= 10)
        {
            n -= 10; // Deduct ₹10 from the remaining value
            n10++;   // Increment the count of ₹10 notes
        }
        else if (n >= 5)
        {
            n -= 5; // Deduct ₹5 from the remaining value
            n5++;   // Increment the count of ₹5 notes
        }
        else if (n >= 2)
        {
            n -= 2; // Deduct ₹2 from the remaining value
            n2++;   // Increment the count of ₹2 notes
        }
        else
        {
            n -= 1; // Deduct ₹1 from the remaining value
            n1++;   // Increment the count of ₹1 notes
        }
    }

    // Display the count of each denomination
    cout << "Number of ₹100 notes used: " << n100 << endl;
    cout << "Number of ₹50 notes used: " << n50 << endl;
    cout << "Number of ₹10 notes used: " << n10 << endl;
    cout << "Number of ₹5 notes used: " << n5 << endl;
    cout << "Number of ₹2 notes used: " << n2 << endl;
    cout << "Number of ₹1 notes used: " << n1 << endl;
}

