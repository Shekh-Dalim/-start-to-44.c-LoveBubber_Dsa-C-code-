// 2 time


/*************** Dynamic Memory Allocation  ***************** */

/*
  1: How to create a 2D array dynamically 
  2: input/output
  3: How to free memory

*/
#include <iostream>
using namespace std;

int main()
{

    int n, m; // n is Row and m is Column
    cin >> n >> m;

    int **arr = new int *[n];  // 2D Array creation for n rows

    // Corrected loop for 2D Array creation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m]; // Allocate m columns for each row
    }

    // Input
    cout << "Input the array element: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Print
    cout << "Display The Array Element: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free firts Array bala portion
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    // Free second Array bala portion
    delete[] arr;

    return 0;
}