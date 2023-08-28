#include <iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter vowel: ";
cin>>ch;
switch(ch)
{
    case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
    cout<<"Enter alphabet is a vowel";
    break;
    default:
    cout<<"Enter alphabet is consonant";
}
}