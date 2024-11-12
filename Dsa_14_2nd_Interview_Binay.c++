// 2 time

/***************** Q: Find pivot in an array ************* */

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     while (s < e)
//     {
//         mid = (s+e)/2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }
// int main()
// {
//     int arr[5] = {3, 8, 10, 17, 1};
//     cout << "Pivot element is: " << getPivot(arr, 5) << endl;
//     return 0;
// }

/***************** Q: Search is Rotated sorted array   O(log n)************* */  //IMP

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid;
//     while (s < e)
//     {
//         mid = (s + e) / 2;
//         if (arr[0] <= arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }
// int binarySearch(int arr[], int s,int e ,int key)
// {
//     int low, mid, high;
//     low = s;
//     high = e;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key) // upper program is same only condition change
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int findPosition(int arr[], int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if (k >= arr[pivot] && k <= arr[n - 1])
//     { //BS on 2nd part
//         return binarySearch(arr, pivot, n - 1, k);
//     }
//     else{//BS on 1st part
//         return binarySearch(arr,0,pivot - 1,k);
//     }
// }

// int main()
// {
//      int n = 5;
//     int arr[n] = {7, 9, 1, 2, 3};  // Example array
//     int target = 3;                // Example target element

//     int position = findPosition(arr, n, target);

//     if (position != -1)
//     {
//         cout << "The element " << target << " is present at index " << position << endl;
//     }
//     else
//     {           
//         cout << "The element " << target << " is not present in the array." << endl;
//     }

//     return 0;
// }


/********** Squre root using bunary search  ************/

// #include <iostream>
// using namespace std;

// long long int SqureRoot(int n)
// {
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e - s) / 2;
//     long long int ans = -1;
//     while (s <= e)
//     {
//         long long int square = mid * mid;
//         if (square == n)
//         {
//             return mid;
//         }
//         if (square < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// double morePrecision(int n, int precision, int tempSol)    // Try youself
// {
//     double factor = 1;
//     double ans = tempSol;
//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main()
// {

//     int n;
//     cout << "Enter the number ";
//     cin >> n;

//     int tempSol = SqureRoot(n);

//     cout << "Ans is " << morePrecision(n, 3, tempSol) << endl;
//     return 0;
// }
