#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " "; // Add a space to separate elements
        }
        cout << endl; // Add a newline character after each row
    }
}

int main()
{
    //matrix
    int arr[3][3] = {
        {1, 2, 7},
        {3, 4, 8},
        {5, 6, 9}};
    int row = 3;
    int col = 3;
    printArray(arr, row, col);

    return 0;
}
