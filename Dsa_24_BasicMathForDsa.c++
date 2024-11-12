// 2 time

// /****************  Q:1:Check prime Number  *************/
// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n))
//     {
//         cout << "It is a Prime Number" << endl;
//     }
//     else
//     {
//         cout << "It is not a Prime Number " << endl;
//     }

//     return 0;
// }

/**************** LeetCode 204   Q:2:count prime Number  *************/

/*------------------------- 1st approach with TC:- O(n*n) ------------------------*/
// #include<iostream>
// using namespace std;

//     bool isPrime(int n){
//         if (n <= 1)
//         {
//             return false;
//         }
//        for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//            {
//                 return false;
//            }
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int cnt = 0;
//         for(int i = 2; i<n; i++){
//             if(isPrime(i)){
//                 cnt++;
//             }
//         }
//         return cnt;
//     }

// int main(){
//     int num;
//     cout<<"Entet the number: ";
//     cin>>num;

//     int count = countPrimes(num);
//     cout<<"Total prime number are precent: "<<count;
//     }

/*------------------------- 2nd approach with TC:- O(n) ------------------------*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int CountPrimeNumber(int n)
// {

//     int cnt = 0;
//     vector<bool> prime(n + 1, true); // Ek vector bana lia jismai mai sare number ko true mark kar dia

//     prime[0] = prime[1] = false; // 0 and 1 ko false(non Prime) mark kar do

//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             cnt++;

//             for (int j = 2 * i; j < n; j = j + i)
//             { // If 'i' is prime number then uske multiply sare number ko
//                 prime[j] = 0;
//             }
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     int num;
//     cout << "Enter the value of n: ";
//     cin >> num;

//     int result = CountPrimeNumber(num);
//     cout << "Number of prime numbers up to " << num << " is: " << result << endl;

//     return 0;
// }

/****************    Q:3:GCD/HCF   ************/
// Itreative way
// #include <iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     if (a == 0)   // if a 0
//         return b;  // ans in b

//     if (b == 0)  // if b 0
//         return a;  // ans is a

//     while (a != b)  // if no one is 0 then convert 0 either a or b
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b = b - a;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int a, b;
//     cout << "ENter the value of a and b : " << endl;
//     cin >> a >> b;

//     int ans = gcd(a, b);
//     cout << "The GCD of " << a << " & " << b << " is: " << ans << endl;
//     return 0;
// }

/****************    Q:4:Print ans Module  (Module Exponential) ************/

/*-------solve easy way by me only follow this code not love bubber code ---------*/
// #include <iostream>
// using namespace std;

// int modularExponential(int x, int n, int m)
// {
//     int res = 1;

//     while (n > 0)
//     {
//         if (n & 1) // Odd
//         {
//             res = (res * x) % m;
//         }
//         x = (x * x) % m;
//         n = n >> 1;
//     }
//     int result = res % m;
//     return result;
// }

// int main()
// {
//     int x = 2;   // Base
//     int n = 200; // Exponent
//     int m = 12;  // Modulus
//     cout << "The result of " << x << "^" << n << " % " << m << " is: " << modularExponential(x, n, m) << endl;
//     return 0;
// }

/*-----------------solve using Love Bubber video --------------*/

// #include <iostream>
// using namespace std;

// int modularExponential(int x, int n, int m)
// {
//     int res = 1;

//     while (n > 0)
//     {
//         if (n & 1) // Odd
//         {
//             // res = ((res % m) * (x % m)) % m; // 1
//             // res = ((res) * (x)% m) % m;  //2
//             res = (1LL * (res) * (x) % m) % m; // 3
//         }
//         // x = ((x % m) * (x % m)) % m;  // 1,2
//         x = (1LL * (x) * (x) % m) % m; // 3

//         n = n >> 1;
//     }
//     return res;
// }

// int main()
// {
//     int x = 2;  // Base
//     int n = 5;  // Exponent
//     int m = 13; // Modulus
//     cout << "The result of " << x << "^" << n << " % " << m << " is: " << modularExponential(x, n, m) << endl;
//     return 0;
// }