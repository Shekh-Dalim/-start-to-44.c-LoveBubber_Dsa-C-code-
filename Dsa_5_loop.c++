// 2 time

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 6;
//     int b = 6;

//     // cout << " a&b " << (a & b) << endl;
//     // cout << " a|b " << (a | b) << endl;
//     // cout << " ~a " << (~a) << endl;
//     // cout << " a^b " << (a ^ b) << endl;
//     // cout << (17 >> 1) << endl;
//     // cout << (17 >> 2) << endl;
//     cout << (17 << 1) << endl;
//     // cout << (17 << 2) << endl;

//     return 0;
// }

/*  5 QUESTION */

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b = 1;
//     a = 10;
//     if (++a)
//         cout << b;  /* Output  1*/
//     else
//         cout << ++b;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 && ++b > 2)
//     {
//         cout << "Stage1 =Inside If ";
//     }
//     else
//     {
//         cout << "Stage2 =Inside else ";
//     }
//     cout<< a << " " << b << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int number = 3;
//     cout<< (25 * (++number));
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//    int a = 1;
//    int b = a++;
//    int c = ++a;
//    cout<<b;
//    cout<<c;
// }

/*  prime number */

// n % i == 0  // Not primt
// n % i != 0  // Prime

// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n < 2)
//     {
//         return 0;
//     }
//     for (int i = 2; i < n; i++)
//     // for (int i = 2; i <= n / 2; i++)
//     {
//         // if remainder 0 then it is not a prime number
//         if (n % i == 0)
//         {
//             return 0; // Not prime
//         }
//     }
//     return 1; // Prime
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n) == 0)
//     {
//         cout << "Not a prime Number" << endl;
//     }
//     else
//     {
//         cout << "prime number";
//     }
//     return 0;
// }

/*########################################################################################*/

/********************* Q:1 leetcode 1281********************/
// #include <iostream>
// using namespace std;

// int subtractProductAndSum(int n)
// {
//     int prod = 1;
//     int sum = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;

//         prod = prod * digit;
//         sum = sum + digit;
//         n /= 10;
//     }
//     int answer = prod - sum;
//     return answer;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int ans = subtractProductAndSum(n);
//     cout<<"The ans will be: "<<ans;
//     return 0;
// }

/********************* Q:2 leetcode 191  ********************/

// #include <iostream>
// using namespace std;
// int CountOne(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count = count + 1;
//         }
//         else{
//             continue;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[]={0,0,0,1,1,1,1,0};
//     int count =CountOne(arr,8);
//     cout<<count;
//     return 0;
// }