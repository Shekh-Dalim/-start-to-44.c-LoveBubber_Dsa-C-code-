// 2 time

/*************** Q:1: Rotate Array  ********** */

// #include <iostream>
// using namespace std;
// void RotateArray(int A[], int n, int k)
// {
//     int *temp = new int[n];  
//     for (int i = 0; i < n; i++)
//     {
//         temp[(i + k) % n] = A[i];
//     }
//     // Copy temp back into A
//     for (int i = 0; i < n; i++)
//     {
//         A[i] = temp[i];
//     }

//     // Deleting the temporary array to avoid memory leak
//     delete[] temp;
// }
// void print(int A[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int A[] = {1, 7, 9, 11};
//     int n = sizeof(A) / sizeof(A[0]);
//     int k;
//     cout << "Enter the size of K: ";
//     cin >> k;

//     print(A, n);
//     RotateArray(A, n, k);
//     print(A, n);

//     return 0;
// }

/*********** Q:2: Check array is sorted and rotated ***** */

// #include <iostream>
// using namespace std;

// bool SortAndRotate(int A[], int n) {
//     int count = 0;
//     for (int i = 1; i < n; i++) {
//         if (A[i-1] > A[i]) {
//             count++;
//         }
//     }
//     if (A[n-1] > A[0]) {
//         count++;
//     }
//     return count <= 1;
// }

// int main() {
//     // int A[] = {3, 4, 5, 1, 2}; // Example array
//     int A[] = {3,5,7,1,6}; // Example array
//     int n = sizeof(A)/sizeof(A[0]);

//     if (SortAndRotate(A, n)) {
//         cout << "The array is a rotated sorted array." << endl;
//     } else {
//         cout << "The array is not a rotated sorted array." << endl;
//     }
// }

/************* Q:3:Sum of two Arrays ********** */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // First case: if there are remaining digits in 'a'
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Second case: if there are remaining digits in 'b'
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third case: if there is a remaining carry
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // The result is currently in reverse order
    reverse(ans.begin(), ans.end());

    return ans;
}

void print(const vector<int>& vec)
{
    for (int num : vec)
    {
        cout << num;
    }
    cout << endl;
}

int main()
{
    vector<int> a = {1, 2, 3}; // Example vector a
    vector<int> b = {4, 5, 6}; // Example vector b

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    cout << "The sum is: ";
    print(result);

    return 0;
}
