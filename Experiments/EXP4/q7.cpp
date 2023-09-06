/*
!Write a program to accept a number from user and display if the number is Armstrong number.
!(Armstrong number is the number in any given number base, which forms the total of the same number,
!then each of its digits is raised to the power of the number of digits in the number.)
*/

#include <iostream>  //*param for cout and cin
#include <math.h>    //*for pow() function
using namespace std; //*for cout and cin
int main()
{
    int armstong = 0, n = 0, m = 0, c = 0; //*initializing variables
    cout << "Enter Number: ";              //*taking input
    cin >> n;
    m = n; //*making another copy of n so that the original value stays safe after all the operations i do on it in the do while loop
    do
    {
        n /= 10; //*This removes the last digit of n and the second last digit becomes the last
        c++;     //*This counts the number of digits in the number
    } while (n != 0);
    n = m; //*making another copy of n so that the original value stays safe after all the operations i do on it in the do while loop
    do
    {
        armstong += pow(m % 10, c); //*Taking the power of the digits and adding them to armstong
        m /= 10;                    //*This removes the last digit of m and the second last digit becomes the last
    } while (m != 0);
    if (armstong == n)
    {
        cout << "It is an armstrong number"; //*If the sum of the powers of the digits is equal to the original number then it is an armstrong number
    }
    else
    {
        cout << armstong << "Not an armstrong number"; //*If the sum of the powers of the digits is not equal to the original number then it is not an armstrong number
    }
}
