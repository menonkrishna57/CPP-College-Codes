#include <iostream>
using namespace std;


// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}



// Function to print the Fibonacci series up to n
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}



int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to print: ";
    cin >> n;



    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
    } else {
        cout << "Fibonacci series up to " << n << " numbers: ";
        printFibonacciSeries(n);
    }



    return 0;
}
