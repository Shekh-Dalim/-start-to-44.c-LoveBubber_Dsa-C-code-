
// 2 time

/* ****************  Binary Search ************* */

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element) // upper program is same only condition change
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 225;
    int searchINdex = binarySearch(arr, size, element);
    cout << "the element " << element << endl;
    cout << "the Index " << searchINdex;
    return 0;
}
