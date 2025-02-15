
/******************* Q:4 Heap sort  *****************/

// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;

//     if (left <= n && arr[largest] < arr[left]) // Left bala index bound ke ander hai (left < n)
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }

//     if (largest != i)
//     { // agar largest update ho gaya
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n)
// {
//     int size = n;

//     while (size > 1)
//     {
//         // Strep 1
//         swap(arr[size], arr[1]);
//         size--;

//         // Step 2
//         heapify(arr, size, 1);
//     }
// }
// int main()
// {
//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n = 5;
//     //heap creation
//     for (int i = n / 2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }

//     cout << "Print the array now " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     //heapsort
//     heapSort(arr,n);
//     cout << "Print the sorted array now " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
