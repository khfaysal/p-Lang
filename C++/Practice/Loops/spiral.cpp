//Bujhi Nai

#include <iostream>
using namespace std;

void printSpiral(int arr[3][3], int row, int col)
{
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (top <= bottom && left <= right)
    {
        // Top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printSpiral(matrix, 3, 3);
    return 0;
}
