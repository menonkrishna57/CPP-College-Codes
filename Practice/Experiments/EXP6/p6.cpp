#include <iostream>
using namespace std;
//!...
int main() {
    int m, n, p, q;
    cout << "Enter the order of first matrix (m x n): ";
    cin >> m >> n;
    cout << "Enter the order of second matrix (p x q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    cout << "Enter the elements of first matrix: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of second matrix: ";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    cout << "Resultant matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
