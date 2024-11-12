// 2 time
/********** Array with recurtion relation ********/

/******************* Q:1 Is Sorted using Recurtion ***************/

// #include <iostream>
// using namespace std;

// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }
// bool isSorted(int arr[], int size)
// {
//     print(arr, size);
//     // Base case
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }

//     if (arr[0] > arr[1]) // Not sorted
//     {
//         return false;
//     }
//     else // Sorted (True)  // yee bala 2 element sorted hai baki remaining check kar loo
//      {

//         return isSorted(arr + 1, size - 1);
//     }
// }
// int main()
// {
//     int arr[5] = {2, 4, 6, 8, 9};
//     int size = 5;
//     bool ans = isSorted(arr, size);
//     if (ans)
//     {
//         cout << "Array is sorted";
//     }
//     else
//     {
//         cout << "Array is not sorted";
//     }

//     return 0;
// }


/******************* Q:2 sum of an array using recurtion  ***************/

// Recursive case: sum the last element and the sum of the rest of the array

// #include <iostream>
// using namespace std;

// int sumValue(int arr[], int size)
// {
//     // Base case1: if size is 0, return 0
//     if (size == 0)  return 0;

//     // Base case2: if size is 0, return 0
//     if (size == 1) return arr[0];
        
//     return arr[size - 1] + sumValue(arr, size - 1);
    
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
//     int value = sumValue(arr, size);
//     cout << value;
//     return 0;
// }


// Recursive case: sum the first element and the sum of the rest of the array
// #include <iostream>
// using namespace std;

// int sumValue(int arr[], int size)
// {
//     // Base case: if size is 0, return 0
//     if (size == 0)
//     {
//         return 0;
//     }

//     return arr[0] + sumValue(arr + 1, size - 1);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
//     int value = sumValue(arr, size);
//     cout << value;
//     return 0;
// }


/**************************** Q:3: Linear search using Recurtion  ***************** */

// #include <iostream>
// using namespace std;

// void print(int arr[], int n)
// {
//     cout << "Size of array is: " << n << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// bool linearSearch(int arr[], int size, int key)
// {
//     print(arr, size);
//     // Base Case
//     if (size == 0)
//     {
//         return false;
//     }

//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         // Recursion Relation
//         return linearSearch(arr + 1, size - 1, key);
//     }
// }

// int main()
// {
//     int arr[5] = {3, 5, 1, 2, 6};
//     int size = 5;
//     int key = 6;

//     bool ans = linearSearch(arr, size, key);

//     if (ans)
//     {
//         cout << "Element is Present" << endl;
//     }
//     else
//     {
//         cout << "Element is Absent" << endl;
//     }

//     return 0;
// }

/**************************** Q:3: Binary search using Recurtion  ***************** */
#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{
    print(arr, s, e);

    // Base Case
    if (s > e)
    {
        return false; // Element not found
    }

    int mid = s + (e - s) / 2;
    cout << "Value of mid value: "<< arr[mid] << endl;
    if (arr[mid] == k)
    {
        return true; // Element found
    }

    // Recurtion relation
    if (arr[mid] < k) // Search in right part
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else // Search in left part
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int key = 18;

    cout << "Present or not: " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}

/****************************Another Way (count  Step also) Q:3: Binary search using Recurtion using  ***************** */

// #include <iostream>
// using namespace std;

// void print(int arr[], int s, int e) {
//     for (int i = s; i <= e; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// bool binarySearch(int arr[], int s, int e, int k, int& round) {
//     cout << "Round: " << round << ": ";
//     print(arr, s, e);

//     // Base Case
//     if (s > e) {
//         return false; // Element not found
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] == k) {
//         return true; // Element found
//     }

//     round++;

//     if (arr[mid] < k) { // Search in right part
//         return binarySearch(arr, mid + 1, e, k, round);
//     } else { // Search in left part
//         return binarySearch(arr, s, mid - 1, k, round);
//     }
// }

// int main() {
//     int arr[6] = {2, 4, 6, 10, 14, 18};
//     int key = 18;
//     int round = 0;

//     cout << "Present or not: " << binarySearch(arr, 0, 5, key, round) << endl;

//     return 0;
// }
