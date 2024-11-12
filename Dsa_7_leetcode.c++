// 2 time

// /************************* 7 Leetcode Reverce of a number ***************************/
// #include <iostream>
// #include <climits>
// using namespace std;

// int reverce(int n)
// {

//     int ans = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         // if ((ans*10 > INT_MAX ) || (ans*10 < INT_MIN))  //(output is error)  The overflow check should be done using the next value of ans * 10 + digit instead of ans * 10.
//         if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
//         {
//             return 0;
//         }

//         ans = (ans * 10) + digit;
//         n = n / 10;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     int result = reverce(n);
//     cout << "The reverce of the number is: " << result;
//     return 0;
// }

/*********************** 1009 LeetCode complement of a binary number ********************/

/************************ decimal to binary and then 1's complement (me) ****************/
// #include <iostream>
// using namespace std;

// int Desi_TO_Bin(int n)
// {
//     int ans = 0;
//     int base = 1; // Represents the place value in binary

//     while (n != 0)
//     {
//         int bit = n & 1; // Extracting the least significant bit

//         ans = ans + bit * base;

//         n = n >> 1;       // Shift right by one bit
//         base = base * 10; // Update place value
//     }
//     return ans;
// }
// int ones_compliment(int n)
// {
//     string s = to_string(n);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
//     return stoi(s);
// }

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int result = Desi_TO_Bin(n);
//     cout << "decimal to binary number is: " << result << endl;

//     int Complement = ones_compliment(result);
//     cout<<"The ones complement result is: "<<Complement;

//     return 0;
// }

/******************* decimal to binary and then 1's complement and then again conver binary to decimal  ***********************/

#include<iostream>
using namespace std;

 int bitwiseComplement(int n) {
        int m =n;
        int mask = 0;
        if(n == 0){
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m>> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }

int main()
{
    int n;
    cout<<"Enter thevalue of n: ";
    cin>>n;
    int value = bitwiseComplement(n);
    cout<<"The value is: "<<value;

};


/***************************** Power of 2 (me) **************************/
// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPowerOfTwo(int n)
// {
//     for (int i = 0; i <= 30; i++)
//     {
//         int ans = pow(2, i);
//         if (ans == n)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cout << "Enter thevalue of n: ";
//     cin >> n;
//     if(isPowerOfTwo(n) == 1){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// };



/* Another way*/
// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPowerOfTwo(int n)
// {
//     int ans = 1;
//     for (int i = 0; i <= 30; i++)
//     {
//         int INT_MAX;
//         if (ans == n)
//         {
//             return true;
//         }
//         if(ans < INT_MAX/2)
//         ans = ans * 2;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cout << "Enter thevalue of n: ";
//     cin >> n;
//     bool value = isPowerOfTwo(n);
//     cout << "The value is power of 2 or not : " << value;
// };