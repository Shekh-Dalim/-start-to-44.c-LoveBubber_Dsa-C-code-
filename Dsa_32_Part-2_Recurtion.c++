// 2 time


/*********************** Q: 1  ****************** */

// #include <iostream>
// using namespace std;
// void reachHome(int src, int dest)
// {
//     cout << "Source " << src << " Destination " << dest << endl;
//     if (src == dest)
//     {
//         cout << "Pahuch gya " << endl;
//         return; //  the return statement means that the function will exit at that point if src is equal to dest. No further code in the function will be run after this return statement.
//     }

//     src++;  // Processing
//     reachHome(src, dest);   //Recurtion
// }
// int main()
// {
//     int src = 1;
//     int dest = 10;

//     reachHome(src, dest);
//     return 0;
// }

/*************************   fibonacci number    ***********************/
// 0,1,1,2,3,5,8,13,21,34  index start from 0

/*
fib(n - 2) + fib(n - 1) here use like this

enter number is 5
fib(3) + fib(4)
fib(1)+fib(2) + fib(2)+fib(3)
fib(1)+fib(0)+fib(1)+fib(0)+fib(1)+fib(1)+fib(2)
fib(1)+fib(0)+fib(1)+fib(0)+fib(1)+fib(1)+fib(0)+fib(1)

1+1+1+1+1+1+1+1 = 8
 */

// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n == 0)  // First term 0
//     {
//         return 0;
//     }
//     if (n == 1)   //Second term 1
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// int main()
// {
//     int index;
//     cout << "enter a number index " << endl;
//     cin >> index;
//     cout << "the term in fibonacci sequence at index: " << index << " is " << fib(index) << endl;
//     return 0;
// }

/************** Q:3: Count ways to reach the N-th stairs ***************/
/*
This program calculates the number of ways to reach the N-th stair if you can move either 1 step or 2 steps at a time. It does this using a recursive function called CountStair.

this also an base case: 
count_ways(0) = 1 (1 way to "do nothing")
count_ways(1) = 1 (only one way to take a single step).

*/
// #include <iostream>
// using namespace std;
// int CountStair(int nStairs)
// {
//     if (nStairs < 0)  //If the current stair number is negative, there are no ways to reach that stair. This is why the function returns 0 in this case.
//     {
//         return 0;
//     }
//     if (nStairs == 0)  // If nStairs is zero, this represents the starting point. The only way to be at the starting stair is to stay there, which counts as one way. So, the function returns 1 for nStairs == 0.
//     {
//         return 1;
//     }
//     return CountStair(nStairs - 1) + CountStair(nStairs - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << CountStair(n);
//     return 0;
// }


/************** Q:4: Say Digit  ***************/

// #include <iostream>
// using namespace std;
// void sayDigit(int n, string arr[])
// {
//     // Base Case
//     if (n == 0)
//     {
//         return;
//     }

//     // Processing
//     int digit = n % 10;
//     n = n / 10;

//     // Print
//     // cout << arr[digit] << " ";   // output 'two one four' if cout is before recurtion call

//     // Recursive call
//     sayDigit(n, arr);

//     // Print
//     cout << arr[digit] << " ";   // output 'four one two' if cout is before recurtion call

// }
// int main()
// {
//     string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//     int n;
//     cin >> n;

//     cout << endl
//          << endl
//          << endl;
//     sayDigit(n, arr);
//     cout << endl
//          << endl
//          << endl;

//     return 0;
// }