//int a[]={1,2,3,4,5}
//int a[5]={1,2,3,4,5}
#include <iostream>
using namespace std;

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];
    
    // Taking input for matrix 1
    cout << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    
    // Taking input for matrix 2
    cout << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    
    // Multiplying matrices
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    
    return 0;
}