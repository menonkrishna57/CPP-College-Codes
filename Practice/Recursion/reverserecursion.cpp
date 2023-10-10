#include <iostream>
#include <cstring>
using namespace std;

void reverse(char st[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        char temp = st[start];
        st[start] = st[end];
        st[end] = temp;
        reverse(st, start + 1, end - 1);
    }
}

int main()
{
    char st[100];
    cout << "Enter a string: ";
    cin >> st;
    int len = strlen(st);
    reverse(st, 0, len - 1);
    cout << "Reversed string: " << st << endl;
    return 0;
}