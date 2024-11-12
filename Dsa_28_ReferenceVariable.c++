// 2 time


// /****************** Reference Variable ****************/  // Same memory different name 

// #include <iostream>
// using namespace std;

// int* fun(int a){
//     int num = a;
//     int* ptr = &num; // Local Variable
//     return ptr;
// }

/* Danger to use like 'int& func(int a)' so avoid write like this */
// int& func(int a){   // 'int&' Return by Reference
//     int num = a;   // Local Variable
//     int& ans = num;
//     return ans;
// }

// void update1(int n){
//     n++;
// }
// void update2(int& n){
//     n++;
// }

// int main()
// {
//     int i = 5;
//     int &j = i;
//     cout << "The value of a is " << i << endl;
//     i++;
//     cout << "The value of a is " << i << endl;
//     j++;
//     cout << "The value of a is " << i << endl;

//     int n =5;
//     // cout<<"Before "<<n<<endl;
//     // // update1(n);
//     // update2(n);
//     // cout<<"Aftre "<<n<<endl;

//     // func(n);
//     // fun(5);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char ch = 'q';
//     cout<<sizeof(ch)<<endl;

//     char* c= &ch;
//     cout<<sizeof(c)<<endl;
//     return 0;
// }


/*************** Sum of Number of Element using Dynamic memory allocation *************/

#include <iostream>
using namespace std;
int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "Answer is: " << ans << endl;

    // Case 1
    while (true)
    {
       int i = 15;
    }
    
    // Case 2
    while (true)
    {
       int* ptr = new int;
    }
    
    
    // delete[] arr;
    return 0;
}


/*************** Sum of Number of Element using Dynamic memory allocation using chatgpt*************/
// #include <iostream>
// using namespace std;

// int getSum(int *arr, int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//         cout << "Adding arr[" << i << "] = " << arr[i] << ", sum now is " << sum << endl;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Invalid number of elements." << endl;
//         return 1;
//     }

//     int* arr = new int[n];
//     cout << "Enter the elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         cout << "arr[" << i << "] = " << arr[i] << endl; // Debugging statement
//     }

//     int ans = getSum(arr, n);
//     cout << "Answer is: " << ans << endl;

//     delete[] arr;  // Free the dynamically allocated memory
//     return 0;
// }
