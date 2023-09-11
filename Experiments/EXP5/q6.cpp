/*
!Write a program to accept a number from user and display if the number is Armstrong number.
!(Armstrong number is the number in armstronany given number base, which forms the total of the same number,
!then each of its digits is raised to the power of the number of digits in the number.)
*/

#include <iostream>  //*param for cout and cin
#include <math.h>    //*for pow() function
using namespace std; //*for cout and cin
bool armstrong(int n)
{
    int arm = 0, m , c = 0; //*initializing variables
    m = n; //*making another copy of n so that the original value stays safe after all the operations i do on it in the do while loop
    do
    {
        n /= 10; //*This removes the last digit of n and the second last digit becomes the last
        c++;     //*This counts the number of digits in the number
    } while (n != 0);
    n = m; //*making another copy of n so that the original value stays safe after all the operations i do on it in the do while loop
    do
    {
        arm += pow(m % 10, c); //*Taking the power of the digits and adding them to armstrong
        m /= 10;                    //*This removes the last digit of m and the second last digit becomes the last
    } while (m != 0);
    if (arm == n)
    {
        return true; //*If the sum of the powers of the digits is equal to the original number then it is an armstrong number
    }
    else
    {
        return false; //*If the sum of the powers of the digits is not equal to the original number then it is not an armstrong number
    }
}

int main()
{
    int n1,n2;
    cout << "Enter 1st Number: ";              //*taking input
    cin >> n1;
    cout<<"Enter 2nd Number: ";
    cin>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(armstrong(i))
        {
            cout<<i<<" is an armstrong number"<<endl;
        }
    }
}
