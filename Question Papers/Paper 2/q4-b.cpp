#include <iostream>
using namespace std;

int reverse(int num) {
    if (num < 10) {
        return num;
    }
    int lastDigit = num % 10;
    int remainingNum = num / 10;
    return (lastDigit * pow(10, floor(log10(remainingNum)) + 1)) + reverse(remainingNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversedNum = reverse(num);
    cout << "Reverse of " << num << " is " << reversedNum << endl;
    return 0;
}
