// 2 time 

/***********     Merge Sort using RR  SC->O(n)   TC-> O(n log n) ************** */

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)  // merge(arr, 0, 1)
{
    int mid = s+(e-s)/2;   // mid = 0 + (1 - 0) / 2 = 0

    // length of two arrays
    int len1 = mid + 1 - s;  // len1 = mid + 1 - s = 0 + 1 - 0 = 1
    int len2 = e - mid;      // len2 = e - mid = 1 - 0 = 1

    // Create two new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy 1st array values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    // Copy 2nd array values
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // Merge sorted parts
    merge(arr, s, e);
}

int main()
{
    int n = 5;
    int arr[15] = {2, 5, 1, 6, 9};

    mergeSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
