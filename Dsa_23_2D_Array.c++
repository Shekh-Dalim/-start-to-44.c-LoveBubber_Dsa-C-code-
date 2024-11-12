
// 1time

/******************************************************************** */
// #include <iostream>  // TC: O(R*C)
// using namespace std;
// bool IfPresent(int arr[][4], int target, int i, int j)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     // Create 2D array
//     int arr[3][4];

//     // cout << "Enter the element row wise: " << endl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 4; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }

//     cout << "Enter the element column wise: "<< endl; //
//     for (int j = 0; j < 4; j++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Print the element: " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Enter the element to search " << endl;
//     int target;
//     cin >> target;

//     if (IfPresent(arr, target, 3, 4))
//     {
//         cout << "Element found " << endl;
//     }
//     else
//     {
//         cout << "Not Found " << endl;
//     }

//     return 0;
// }

/****************************************************************** */
// #include <iostream>
// #include <climits>
// using namespace std;

// // To sum row wise
// void printSumRowWise(int arr[][4], int i, int j)
// {
//     cout << "The sum of the all row element: " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// // To sum row wise
// void printSumColumnWise(int arr[][4], int i, int j)
// {
//     cout << "The sum of the all column element: " << endl;
//     for (int j = 0; j < 4; j++)
//     {
//         int sum = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// int largeNumberSum(int arr[][4], int i, int j)
// {
//     int maxi = INT_MIN;
//     int rowIndex = -1;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//         if (sum > maxi)
//         {
//             maxi = sum;
//             rowIndex = i;
//         }
//     }
//     cout << "The maximum sum is: " << maxi << endl;
//     return rowIndex;
// }
// int main()
// {
//     // Create 2D array
//     int arr[3][4];

//     cout << "Enter the element row wise: " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Print the element: " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Sum row wise: " << endl;
//     printSumRowWise(arr, 3, 4);

//     // cout << "Sum Column wise: " << endl;
//     // printSumColumnWise(arr, 3, 4);

//     int rowIndex = largeNumberSum(arr, 3, 4);
//     cout << "The maximum sum at the index: " << rowIndex + 1 << endl; // Adding 1 for 1-based index
//     return 0;
// }

/*********************  Q:1:Print Like A Wave   *************** */

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;
//     for (int j = 0; j < mCols; j++)
//     {
//         if (j & 1)  //If j is odd, its binary representation ends in 1, so (j & 1) will be 1.
//         {
//             // Odd Index -> Bottom to top
//             for (int i = nRows - 1; i >= 0; i--)
//             {
//                 cout << arr[i][j] << " ";
//                 ans.push_back(arr[i][j]);
//             }
//         }
//         else   // if (j & 0)If j is even, its binary representation ends in 0, so (j & 1) will be 0.
//         {
//             // 0 or even Index-> top to bottom
//             for (int i = 0; i < nRows; i++)
//             {
//                 cout << arr[i][j] << " ";
//                 ans.push_back(arr[i][j]);
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> arr = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
//     int nRows = arr.size();  // Why arr[0] is not used for rows: The total number of rows in the 2D array is obtained from the outer vector, arr. So, you directly call arr.size(), which gives the count of rows.
//     int mCols = arr[0].size();  // Why arr[0] is used for columns: To get the number of columns, you need to check the size of an individual row. Since arr[0] is the first row, arr[0].size() gives the number of columns in that row.

//     cout << "Wave print result: ";
//     vector<int> result = wavePrint(arr, nRows, mCols);

//     // cout << "Wave print result: ";
//     // for (int num : result)
//     // {
//     //     cout << num << " ";
//     // }
//     // cout << endl;

//     return 0;
// }

/**************** Leetcode 54 Q:2:Spiral Print  TC- (m*n)**************/

#include<iostream>
#include<vector>
using namespace std;

// Function to print matrix in spiral order
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> ans;
    int row = matrix.size(); // Number of rows
    int col = matrix[0].size();  // Number of columns  (koi vi row ka size nikal loo)

    int count = 0;  // Count initialization
    int total = row * col;  // Total number of elements in the matrix

    // Index Initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total)
    {
        // Print starting row
        for(int index = startingCol; count < total && index <= endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // Print ending column
        for(int index = startingRow; count < total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // Print ending row
        for(int index = endingCol; count < total && index >= startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // Print starting column
        for(int index = endingRow; count < total && index >= startingRow; index--){
             ans.push_back(matrix[index][startingCol]);
             count++;
        }
        startingCol++;
    }
    return ans;
}

int main() {
    // Input the matrix
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the spiralOrder function
    vector<int> result = spiralOrder(matrix);

    // Output the spiral order
    cout << "Spiral order of the matrix is: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

/**************** HW Leetcode 48 Q:3:Rotate Image  **************/ // need more time to solve try yourself

/**************  Leetcode 74  Q:4: Search a 2D Matrix (Binary search in 2D array(array was sorted)) ****************/

// #include <iostream>
// using namespace std;

// bool binarySearchMatrix(int arr[][4], int rows, int cols, int element)
// {
//     int s = 0;
//     int e = rows * cols - 1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;

//         // Map mid index to 2D array indices
//         int midElement = arr[mid / cols][mid % cols];

//         if (midElement == element)
//         {
//             return true;
//         }
//         else if (midElement < element)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }

//     return false;  // Element not found
// }

// int main()
// {
//     int arr[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

//     int element;
//     cout << "Enter the searching element: ";
//     cin >> element;

//     bool found = binarySearchMatrix(arr, 3, 4, element);
//     if (found)
//         cout << "Element found!" << endl;
//     else
//         cout << "Element not found!" << endl;

//     return 0;
// }

/**************  Leetcode 240  Q:4: Search a 2D Matrix (Binary search in 2D array(array was unsorted)) ****************/

// #include <iostream>
// using namespace std;

// bool SearchMatrix(int matrix[][5], int rows, int cols, int target)
// {
//     int rowIndex =0;
//     int colIndex = cols -1;

//     while (rowIndex < rows && colIndex >= 0)
//     {
//         int element = matrix[rowIndex][colIndex];

//         if (element == target)
//         {
//             return true;
//         }
//         else if (element < target)
//         {
//             rowIndex++;
//         }
//         else
//         {
//             colIndex--;
//         }
//     }

//     return false; // Element not found
// }

// int main()
// {
//     int arr[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

//     int element;
//     cout << "Enter the searching element: ";
//     cin >> element;

//     bool found = SearchMatrix(arr, 5, 5, element);

//     if (found)
//         cout << "Element found!" << endl;
//     else
//         cout << "Element not found!" << endl;

//     return 0;
// }
