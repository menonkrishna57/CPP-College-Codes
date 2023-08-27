#include <iostream>
using namespace std;
int main()
{
    int palin=0,n=0,m=0,c=0; //Initializing all variables
    cout<<"Enter Number: ";
    cin>>n;
    m=n;//Making another copy of n so that the original value stays safe after all the operations i do on it in the do while loop
    do//This loop reverses the number
    {
        palin+=(n%10);//This gives the last digit of n
        palin*=10;//The last digit i got is multiplied by 10 so that i can when i can add the second last digit to the this
        n/=10;//This removes the last digit of n and the second last digit becomes the last


    }while(n!=0);
    palin/=10;//This removes the last digit of palin which is 0
    if (palin==m)
    {
        cout<<"It is a Palindrome";//If the reversed number is equal to the original number then it is a palindrome
    }
    else{
        cout<<"Not a Palindrome";//If the reversed number is not equal to the original number then it is not a palindrome
            }
}
