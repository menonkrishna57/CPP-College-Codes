//WAP to find the number of vowels in entered string using pointer [eg - i/p India o/p→ A-1, E-0, I-2, O-0, U-0]
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *a[100];
    int count[5]={0,0,0,0,0};
    cout<<"Enter the string you want to check: ";
    cin>>&a;
    for(int i=0;i<strlen(*a);i++)
    {
        switch(*a[i])
        {
            case 'a':
            case 'A':
            count[0]++;
            break;
            case 'e':
            case 'E':
            count[1]++;
            break;
            case 'i':
            case 'I':
            count[2]++;
            break;
            case 'o':
            case 'O':
            count[3]++;
            break;
            case 'u':
            case 'U':
            count[4]++;
            break;

        }
    }

    cout<<"A- "<<count[0]<<"E- "<<count[1]<<"I- "<<count[2]<<"O- "<<count[3]<<"U- "<<count[4];
    }