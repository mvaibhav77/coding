#include <iostream>
using namespace std;
void input(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter element for index : " << i << " " << j << " ->";
            cin >> arr[i][j];
        }
    }
}
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
    // matrix
    int arr[3][3];
    int row = 3;
    int col = 3;
    input(arr, row, col);
    printArray(arr, row, col);

    return 0;
}
