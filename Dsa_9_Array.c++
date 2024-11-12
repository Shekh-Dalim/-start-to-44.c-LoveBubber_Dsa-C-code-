// 2 time

// #include<iostream>
// using namespace std;

// void printArray(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int number[15];
//     cout<<"Value at 0 index "<<number[1]<<endl;
//     cout<<"Value at 20 index "<<number[20]<<endl;

//     int second[3]= {5,7,11};
//     cout<<"value at 2 index "<<second[2]<<endl;

//     int third[15] = {2,7};
//     int n = 15;
//     printArray(third,n);

// /* (Possible)  Initialising all location with 0 */
//     int fourth[10] = {0};
//     int n = 10;
//     printArray(fourth,n);

// /* (Not Possible)  Initialising all location with 1 */
//       int fifth[10] = {1};
//     int n = 10;
//     printArray(fifth,n);

//     cout<<"finding size  "<<sizeof(fifth)/sizeof(int)<<endl;
//     cout<<"finding size  "<<sizeof(fifth);

//    char ch[5]={ 'a','b','c','d','e'};
//    cout<<ch[3]<<endl;
//    for (char i = 0; i < 5; i++)
//     {
//        cout<<ch[i]<<" ";
//     }

//     // cout<<"every thing is fine "<<endl;
//     return 0;
// }

/* ***********  finding MAximum and Minimum Funtion  ************** */
#include <iostream>
#include <climits> // for INT_MAX and INT_MIN

using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;  // Initialize min to INT_MAX
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
            min = num[i];
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;  // Initialize max to INT_MIN
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];
    }
    return max;
}

int main()
{
    int size;
    cout<<"Enter the size of the element: ";
    cin >> size;

    int num[100];  // Assuming a maximum size of 100 for num array
    cout<<"Enter the Array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // To find and print the minimum value, call getMin function
    cout << "Minimum value is " << getMin(num, size) << endl;

    // To find and print the maximum value, call getMax function
    cout << "Maximum value is " << getMax(num, size) << endl;

    return 0;
}

/******************** finding MAximum and Minimum Using Predefine funtion  ******************/
// #include <iostream>
// #include <climits> // for INT_MAX and INT_MIN

// using namespace std;

// int getMin(int num[], int n)
// {
//     int mini = INT_MAX; // Initialize min to INT_MAX
//     for (int i = 0; i < n; i++)
//     {
//         mini = min(mini, num[i]);   //Predefine Funtion
//     }
//     return mini;
// }

// int getMax(int num[], int n)
// {
//     int maxi = INT_MIN; // Initialize max to INT_MIN
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi, num[i]);   //Predefine Funtion
//     }
//     return maxi;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of the element: ";
//     cin >> size;

//     int num[100]; // Assuming a maximum size of 100 for num array
//     cout << "Enter the Array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i] ;
//     }

//     // To find and print the minimum value, call getMin function
//     cout << "Minimum value is " << getMin(num, size) << endl;

//     // To find and print the maximum value, call getMax function
//     cout << "Maximum value is " << getMax(num, size) << endl;

//     return 0;
// }

/*********** Scope ********* */

// #include <iostream>
// using namespace std;

// void update(int arr[], int n)
// {
//     cout << "Inside the funtion " << endl;
//     /* Update array first element */
//     arr[0] = 120;
//     /* Printing the array */
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "going back to the main funtion" << endl;
// }

// int main()
// {
//     int arr[3] = {1, 2, 3};
//     update(arr, 3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

/* Q: Sum of all element in an array  */

// #include <iostream>
// using namespace std;

// void InputArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int sumarr(int arr[], int n)
// {
// int sum1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum1 = sum1 + arr[i];
//     }
//     return sum1;
// }

// int main()
// {
//     int size;
//     cout << "Enter he size of an array" << endl;
//     cin >> size;
//     int arr[size];
//     cout << "Input the array element: " << endl;
//     InputArr(arr, size);
//     cout << "Display the array element: " << endl;
//     display(arr,size);
//     int sum= sumarr(arr, size);
//     cout << "Display the sum of the array: " <<sum<< endl;

//     return 0;
// }

/*****************   Linear Search *********************/

// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main()
// {

//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
//     int element;
//     cout<<"Enter the element to search for "<<endl;
//     cin>>element;

//     bool found = search(arr,10,element);

//     if(found){
//         cout<<"Key is Present: "<<endl;
//     }
//     else{
//         cout<<"Key is absent "<<endl;
//     }
//     return 0;
// }

/* ************** Reverse an Array ******************* */

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
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
//     int arr[6] = {1, 4, 0, 5, -2, 15};
//     int brr[5] = {2, 6, 3, 9, 4};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     print(arr, 6);
//     print(brr, 5);

//     return 0;
// }

/*

Q: Swap alternate element
Q: Finding Unique element in an array
Q: Finding Duplicate element
Q: Array intersection
Q: Pair Sum
Q: Triplet Sum
Q: sort 0 and 1

*/
