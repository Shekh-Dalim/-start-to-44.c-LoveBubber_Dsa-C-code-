// 2 time

/*******    Q:1: Swap alternate element  ***********/

// #include <iostream>
// using namespace std;

// void alternate(int arr[], int n)
// {
//     int key_1 = 0;
//     int key_2 = 0+1;

//     while (key_2 <n)
//     {
//         swap(arr[key_1], arr[key_2]);
//         key_1=key_1+2;
//         key_2=key_2+2;
//     }
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[6] = {1,2,3,4,5,6};

//     alternate(arr, 6);

//     print(arr, 6);

//     return 0;
// }

/************  Q:2: Finding Unique element in an array *********** */

// #include <iostream>
// #include <vector>
// using namespace std;

// int finduniqueElement(int arr[], int n)
// {
//     int uniqueElement = 0;
//     for (int i = 0; i < n; i++)
//     {
//         uniqueElement = uniqueElement ^ arr[i];
//     }
//     return uniqueElement;
// }

// int main()

// {

//     int arr[] = {2, 3, 1, 6, 3, 6, 2};
//     int find = finduniqueElement(arr, 7);
//     cout << find;

//     return 0;
// }

/***********  Q: In leetcode(1207) Unique Number of Occurrence ******(Not complete )*/
// #include <iostream>
// #include <vector>
// #include <algorithm>  // For sort function
// using namespace std;
// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         vector<int> ans;  // To store the frequency of each element
//         int size = arr.size();

//         // Step 1: Sort the array
//         sort(arr.begin(), arr.end());

//         // Step 2: Count the occurrences of each element
//         int i = 0;
//         while(i < size) {
//             int count = 1;  // Initialize count for the current element
//             // Check for consecutive elements that are the same
//             for (int j = i + 1; j < size; j++) {
//                 if (arr[i] == arr[j]) {
//                     count++;  // Increment count if elements are equal
//                 } else {
//                     break;  // Stop if a different element is found
//                 }
//             }
//             // Step 3: Store the count in the ans vector
//             ans.push_back(count);
//             i = i + count;  // Move to the next distinct element
//         }

//         // Step 4: Sort he frequency array
//         size = ans.size()
//         sort(ans.begin(), ans.end());
//         //Step 5: Check if the frequencies are unique
//         for (int i = 0; i < size - 1; i++) {
//             if (ans[i] == ans[i + 1]) {
//                 return false;  // If two frequencies are the same, return false
//             }
//         }

//         return true;  // All frequencies are unique
//     }
// };

// int main()
//     vector<int> arr = {1, 2, 2, 1, 1, 3};  // Example input
//     Solution solution;
//     if (solution.uniqueOccurrences(arr)) {
//         cout << "All occurrences are unique." << endl;
//     } else {
//         cout << "Occurrences are not unique." << endl;
//     }

//     return 0;
// }

/*******    Q:3: Finding Duplicate element   (Single Dublicate)    (XOR is used when finding single dublicate)  *************** */
// #include <iostream>
// #include <vector>

// using namespace std;
// int findDuplicate(int arr[], int n)
// {
//     int ans = 0;

//     // XOR all array elements
//     for (int i = 0; i < n; i++)
//     {
//         ans ^= arr[i];
//     }

//     // XOR the result with numbers from 1 to n-1
//     for (int i = 1; i <= n - 1; i++)
//     {
//         ans ^= i;
//     }

//     return ans;
// }

// int main()
// {
//     int arr[] = {1, 3, 4, 2, 2}; // Example input
//     int duplicate = findDuplicate(arr, 5);
//     if (duplicate != 0)
//     {
//         cout << "Duplicate found: " << duplicate << endl;
//     }
//     else
//     {
//         cout << "No duplicate found." << endl;
//     }
//     return 0;
// }

/*******  HW  Q: Finding Duplicate element (Two Dublicate)  (XOR is used when finding single dublicate)  *************** */

// #include <iostream>
// #include <cmath> // For abs()

// using namespace std;

// void findDuplicates(int arr[], int n)
// {
//     bool duplicatesFound = false; // Flag to check if any duplicates were found

//     for (int i = 0; i < n; i++)
//     {
//         int index = abs(arr[i]) - 1; // Get the index corresponding to the value

//         // If the element at index is already negative, it means we've seen this number before
//         if (arr[index] < 0)
//         {
//             // Print the duplicate
//             cout << abs(arr[i]) << " ";
//             duplicatesFound = true;
//         }
//         else
//         {
//             arr[index] = -arr[index]; // Mark the element at index as visited by making it negative
//         }
//     }

//     if (!duplicatesFound)
//     {
//         cout << "No duplicates found." << endl;
//     }
//     else
//     {
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[] = {4, 3, 2, 7, 8, 2, 3, 1}; // Example input
//     int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

//     findDuplicates(arr, n);

//     return 0;
// }

/********************     Q:4: Array intersection       *************************/
// #include <iostream>
// #include <vector>
// #include <climits> // for INT_MIN

// using namespace std;
// // /***   1st Logic *** */
// // vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)  //arr1. and arr2 Passing it by reference means that the original array is not copied,any changes to arr1 inside the function will affect the original array.
// // {
// //     vector<int> ans;
// //     for (int i = 0; i < n; i++)
// //     {
// //         int element = arr1[i];
// //         for (int j = 0; j < m; j++)
// //         {
// //             if (element == arr2[j])
// //             {
// //                 ans.push_back(element); // Print
// //                 arr2[j] = INT_MIN;      // Update
// //                 break;                  // Break
// //             }
// //         }
// //     }
// //     return ans;
// // }

// /****  2nd Logic **** */
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (element == arr2[j])
//             {
//                 if (element < arr2[j])
//                 {
//                     break;
//                 }
//                 ans.push_back(element); // Print
//                 arr2[j] = INT_MIN;      // Update
//                 break;                  // Break
//             }
//         }
//     }
//     return ans;
// }

// /******  Logic 3 ****** */
// // vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// // {
// //     int i = 0, j = 0;
// //     vector<int> ans;
// //     while (i < n && j < m)
// //     {
// //         if (arr1[i] == arr2[j])
// //         {
// //             ans.push_back(arr1[i]); // Print(push to the vector)
// //             i++;
// //             j++;
// //         }
// //         else if (arr1[i] < arr2[j])
// //         {
// //             i++;
// //         }
// //         else
// //         {

// //             j++;
// //         }
// //     }
// //     return ans;
// // }

// int main()
// {
//     vector<int> arr1 = {1, 2, 3, 4, 5};
//     vector<int> arr2 = {3, 4, 5, 6, 7};
//     int n = arr1.size();
//     int m = arr2.size();

//     vector<int> intersection = findArrayIntersection(arr1, n, arr2, m);

//     cout << "Intersection of arrays: ";
//     for (int i = 0; i < intersection.size(); i++)
//     {
//         cout << intersection[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

/*************  Q:5:  Pair Sum   ********* */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> pairSum(vector<int> &arr, int s)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == s)
//             {
//                 vector<int> temp;                    // It's an empty vector that will be used to store the current pair of integers (arr[i] and arr[j]) that sum up to s.
//                 temp.push_back(min(arr[i], arr[j])); // placing the smaller number first
//                 temp.push_back(max(arr[i], arr[j])); // placing the larger number second,
//                 ans.push_back(temp);                 // storing the current pair in temp
//             }
//         }
//     }
//     sort(ans.begin(), ans.end()); // sort the array
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int s = 5;

//     // vector<int> arr = {2, -3, 3, 3, -2};
//     // int s = 0;

//     vector<vector<int>> result = pairSum(arr, s);

//     // This loop is used to print the pairs of integers stored in the 2D vector
//     for (const auto &pair : result)
//     {
//         cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
//     }
//     return 0;
// }

/*********       Q:7:  sort 0 and 1   *******************/

/*------ Approach-1 (using count funtion) Two time traversal-----*/
// #include <iostream>
// #include <algorithm>  // For std::count()
// using namespace std;

// int main()
// {
//     int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
//     int size = 8;

//     // Use std::count to count the number of 0s and 1s
//     int count1 = count(arr, arr + size, 0);  // Count the number of 0s
//     int count2 = count(arr, arr + size, 1);  // Count the number of 1s

//     // Single loop to print the array in sorted order
//     for (int i = 0; i < size; i++)
//     {
//         if (i < count1)
//         {
//             cout << 0 << " ";  // Print 0s for the first 'count1' times
//         }
//         else
//         {
//             cout << 1 << " ";  // Print 1s for the remaining iterations
//         }
//     }

//     cout << endl;

//     return 0;
// }


/*------ Approach-2(using sort funtion) -----*/

// #include <iostream>
// #include <algorithm>  // For sort()
// using namespace std;

// int main()
// {
//     int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
//     int size = 8;

//     // Sort the array using iterators for a raw array
//     sort(arr, arr + size);  // Sort from arr[0] to arr[size-1]

//     // Print the sorted array
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

/*------ Approach-3(using two pointer) Single traversal  O(n)-----*/

#include <iostream>
#include <utility>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 )
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        // agar yha pohoch gaye ho to iska  matlab hai arr[left]==1and arr[right]==0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}

//     /**************** HW  Q:leetcode(1207) unique number of occurance  ************************* */
//     /*********   Leetcode prblem   Q: HW : Find all duplicates in an Array       ******* */
//     /*****************  HW    Q:6:  Triplet Sum      *********/
