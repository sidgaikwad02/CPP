#include <bits/stdc++.h>
using namespace std;

int getMaxSumRowIndex(const vector<vector<int>>& matrix, int row, int col) {
    int maxSum = INT_MIN;
    int resultRow = -1;

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            resultRow = i + 1; // using 1-based index for the result
        }
    }

    return resultRow;
}

int main() {
    int row, col;
    cout<<"Enter number of rows and column: ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    int resultRow = getMaxSumRowIndex(matrix, row, col);
     cout << "Row with the maximum sum is: " << resultRow << endl;

    return 0;
}

output:
Enter number of rows and column: 3 3
Enter the elements of the matrix:
0 1 0
1 1 0 
1 1 1
Row with the maximum sum is: 3
