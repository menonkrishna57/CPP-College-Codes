
#include <iostream>
#include <cstring>
using namespace std;

void count_vowels(char *str, int *vowels) {
   cout<<str<<endl;
   cout<<vowels;
    /*while (*str != '\0') {
        if (*str == 'a' || *str == 'A') {
            vowels[0]++;
        } else if (*str == 'e' || *str == 'E') {
            vowels[1]++ ;
        } else if (*str == 'i' || *str == 'I') {
            vowels[2]++;
        } else if (*str == 'o' || *str ==c 'O') {
            vowels[3]++;
        } else if (*str == 'u' || *str == 'U') {
            vowels[4]++;
        }
        str++;
    }*/
}

int main() {
    char str[100];
    int vowels[5] = {0,0,0,0,0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    count_vowels(str, vowels);

    /*cout << "A-" << vowels[0] << ", ";
    cout << "E-" << vowels[1] << ", ";
    cout << "I-" << vowels[2] << ", ";
    cout << "O-" << vowels[3] << ", ";
    cout << "U-" << vowels[4] << endl;
*/
    return 0;
}
