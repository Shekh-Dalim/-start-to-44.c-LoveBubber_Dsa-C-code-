// 1 time

// /*********** Q:Book Allocation problem *************** */

// #include <iostream>
// using namespace std;

// // Function to check if the current allocation is possible
// bool isPossible(int arr[], int n, int m, int mid)
// {
//     int studentCount = 1;
//     int pageSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (pageSum + arr[i] <= mid)
//         {
//             pageSum = pageSum + arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             pageSum =0;
//             pageSum = pageSum + arr[i];

//             // above 2 line and this line statement same
//             // pageSum = arr[i];
//         }
//     }
//     return true;
// }

// // Function to find the minimum number of pages
// int allocateBook(int arr[], int n, int m)  // n is number of book ,, m is number of student
// {
//     int s = 0; // Start
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (isPossible(arr, n, m, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = 2; // Number of students

//     int result = allocateBook(arr, n, m);
//     cout << "Minimum number of pages = " << result << endl;
//     return 0;
// }

/****************  HW Q: Painter Partition problem ************** */

// #include <iostream>
// using namespace std;

// // Function to check if the current allocation is possible
// bool isPossible(int arr[], int n, int m, int mid)
// {
//     int painterCount = 1;
//     int partitionSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (partitionSum + arr[i] <= mid)
//         {
//             partitionSum = partitionSum + arr[i];
//         }
//         else
//         {
//             painterCount++;
//             if (painterCount > m || arr[i] > mid)
//             {
//                 return false;
//             }

//             partitionSum = arr[i];
//         }
//     }
//     return true;
// }

// // Function to find the minimum number of pages
// int painterPartition(int arr[], int n, int m)  // n is number of book ,, m is number of student
// {
//     int s = 0; // Start
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (isPossible(arr, n, m, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     // int arr[] = {10, 20, 30, 60};
//     int arr[] = {5, 5, 5, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int m = 2; // Number of students

//     int result = painterPartition(arr, n, m);
//     cout << "Minimum time required to paint hole the board: " << result << endl;
//     return 0;
// }

/****************  Q: Aggressive cow  (revice again)************** */
#include <iostream>
#include <vector>
#include <algorithm> // for sort function

using namespace std;

// Function to check if the current allocation is possible
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    { // Start from the second stall
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

// Function to find the maximum minimum distance
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int e = stalls.back() - stalls.front(); // Maximum possible distance is the difference between the last and first stall
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {4, 2, 1, 3, 6};
    int k = 3; // Number of cows

    int result = aggressiveCows(stalls, k);
    cout << "The largest minimum distance is " << result << endl;
    return 0;
}
