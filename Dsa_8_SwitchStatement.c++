// 2 time

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'a';
//     int num = 1;

//     cout << endl;
//     switch (ch)
//     {
//     case 1:
//         cout << "First" << endl;
//         break;

//     case '1':
//         switch (2*num)
//         {
//         case 1:
//             cout << "Value of num is " << num << endl;
//             break;
//         case 2:
//             cout << "Another value of num is " << num << endl;
//             break;
//         }
//         break;

//     default:
//         cout << "It is Default case" << endl;
//     }
//     return 0;
// }

/***********   calculator **************/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter the value of a: ";
//     cin >> a;

//     int b;
//     cout << "Enter the value of b: ";
//     cin >> b;

//     char op;
//     cout << "Enter the operation you wnat to perform: " << endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//     {
//         cout << (a + b) << endl;
//     } // Block may be use ot not but both are correct
//     break;

//     case '-':
//         cout << (a - b) << endl;
//         break;

//     case '*':
//         cout << (a * b) << endl;
//         break;

//     case '/':
//         cout << (a / b) << endl;
//         break;

//     case '%':
//         cout << (a % b) << endl;
//         break;

//     default:
//         cout << "Plese enter a valild operation " << endl;
//     }

//     return 0;
// }

/********** Q: 1:  how many different note requird (total amount 1330) 100rs,50rs,20rs,10rs  ***********/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int amount = 1330;
//     int hundreds , fifties , twenties , tens ;

//     switch (1)
//     { // We use switch(1) to always enter the case blocks
//     case 1:
//         hundreds = amount / 100; // Calculate number of 100 Rs notes
//         amount = amount % 100;   // Update the remaining amount
//     case 2:
//         fifties = amount / 50; // Calculate number of 50 Rs notes
//         amount = amount % 50;
//     case 3:
//         twenties = amount / 20; // Calculate number of 20 Rs notes
//         amount = amount % 20;
//     case 4:
//         tens = amount / 10; // Calculate number of 10 Rs notes
//         amount = amount % 10;
//     }

//     // Display the number of notes required
//     cout << "100 Rs notes: " << hundreds << endl;
//     cout << "50 Rs notes: " << fifties << endl;
//     cout << "20 Rs notes: " << twenties << endl;
//     cout << "10 Rs notes: " << tens << endl;

//     return 0;
// }

/************** Q:2:  Even and Odd *************/

// #include <iostream>
// using namespace std;

// // 1-> Even
// // 0-> odd
// bool isEven(int n){

//     if(n & 1 ){
//      return 0; //odd
//     }
//     else{
//         return 1; // even
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     if(isEven(n)){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
//     return 0;
// }

/************  Q: 3: nCr  ***********/

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);
//     return num / denom;
// }

// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     cout<<"Answer is "<<nCr(n,r)<<endl;
//     return 0;
// }

/********** Q: 4: Prime Number ********/

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0; // Not Prime
//         }
//     }
//     return 1; // Prime
// }

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     if (isPrime(n))
//     {
//         cout << "Prime Number";
//     }
//     else
//     {
//         cout << "Not a Prime number";
//     }

//     return 0;
// }

/*************** Pass by value  ************/

#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "In dummy() funtion n is: " << n<<endl;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    dummy(n);
    cout << "In main() funtion n is: " << n;

    return 0;
}