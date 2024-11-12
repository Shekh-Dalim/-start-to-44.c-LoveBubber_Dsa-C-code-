// 2 time

// /***********************  Finding 1st and last index of a particular key *********************/
// #include <iostream>
// using namespace std;

// int firstocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     int ans = -1;
//     while (s <= e)
//     {

//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int lastocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     int ans = -1;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     // int even[5] = {3, 3, 1, 2, 5};
//     int even[5] = {1, 2, 3, 3, 5};
//     cout << "First ocuurrence of 3 is at index " << firstocc(even, 5, 3) << endl;
//     cout << "Last lastocc of 3 is at index " << lastocc(even, 5, 3) << endl;
//     return 0;
// }

/*************************   Q:Finding total number of occurance of a key using linear search ***************************/

// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int n, int key)
// {
//     int count = 0;
//         for (int i = 0; i < n ; i++)
//         {
//             if (key == arr[i])
//             {
//                 count = count + 1;
//             }

//         }
//         return count;

// }

// int main()
// {
//     int arr[] = {1, 2, 3, 3, 3, 3, 5};
//     int n = 7;
//     int key = 3;
//     int totalcount = linearSearch(arr, 7, key);
//     cout << "The total number of " <<key<< " element are present: " << totalcount;

//     return 0;
// }

/*************************   Q:Finding total number of occurance of a key using BInary search ***************************/

// #include <iostream>
// using namespace std;

// int findFirstOccurrence(int arr[], int n, int key) {
//     int s = 0, e = n - 1, mid;
//     int ans = -1;
//     while (s <= e) {
//         mid = (s + e) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             e = mid - 1;  // Keep searching in the left half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int findLastOccurrence(int arr[], int n, int key) {
//     int s = 0, e = n - 1, mid;
//     int ans = -1;
//     while (s <= e) {
//         mid = (s + e) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             s = mid + 1;  // Keep searching in the right half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[] = {1, 2, 3, 3, 3, 3, 5};
//     int n = 7;
//     int key = 3;

//     int firstOccurrence = findFirstOccurrence(arr, n, key);
//     int lastOccurrence = findLastOccurrence(arr, n, key);

//     if (firstOccurrence == -1 || lastOccurrence == -1) {
//         cout << "The total number of " << key << " elements present: 0" << endl;
//     } else {
//         int totalCount = lastOccurrence - firstOccurrence + 1;
//         cout << "The total number of " << key << " elements present: " << totalCount << endl;
//     }

//     return 0;
// }

/********  LeetCode 852 Peak Index in Mountain Array ********/

#include <iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr,int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main(){

    vector<int> arr = {2,1,0};
    int size = arr.size();

    int peak = peakIndexInMountainArray(arr,size);
    cout<<"Peak Element: "<<peak;


    return 0;

}