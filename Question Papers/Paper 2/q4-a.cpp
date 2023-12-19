#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    cout << "Choose an operation to perform:\n";
    cout << "1. Calculate length of the string\n";
    cout << "2. Comparison of first 2 characters of the string\n";
    cout << "3. Concatenate 2 strings\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Length of the first string: " << strlen(str1) << endl;
            cout << "Length of the second string: " << strlen(str2) << endl;
            break;
        case 2:
            if (strncmp(str1, str2, 2) == 0) {
                cout << "First 2 characters of both strings are equal." << endl;
            } else {
                cout << "First 2 characters of both strings are not equal." << endl;
            }
            break;
        case 3:
            char concatenated[200];
            strcpy(concatenated, str1);
            strcat(concatenated, str2);
            cout << "Concatenated string: " << concatenated << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
