// 2 time

/******* factorial  TC-O()  SC-() ********/

// By lobebubber  (Dry run in copy )
// #include <iostream>
// using namespace std;
// int factoriaal(int n)
// {
//     // Base case

//     if (n == 0)
//     {
//         return 1;
//     }

//     int smallerProblem = factoriaal(n - 1);
//     int biggerproblem = n * smallerProblem;
//     return biggerproblem;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << factoriaal(n);
//     return 0;
// }

/*------------ By me -------------*/
// #include<iostream>
// using namespace std;
// int factoriaal(int n){
//     if(n<1){  // Base case
//         return 1;
//     }
//     else{
//         return n*factoriaal(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factoriaal(n);
//     return 0;
// }

/********* Power of 2 ********* */

// #include <iostream>
// #include <cmath>
// using namespace std;
// int power1(int n)
// {
//     if (n == 0)  // Kisi vi number ka power 0 hai to ans 1 hoga
//     {
//         return 1;
//     }
//     else
//     {
//         int sP = power1(n - 1);
//         int bP= 2 * sP;
//         return bP;

//         // return 2*power1(n-1);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << power1(n);
//     return 0;
// }

/********************  imput 5 output 5,4,3,2,1,0  *******************/
// #include <iostream>
// using namespace std;
// void Print(int n)
// {
//     if (n == 0)
//     {
//         return ; // If n is equal to 0, the function returns immediately
//     }

//     // // cout << n << endl;  // // 5,4,3,2,1,....
//     Print(n - 1); //Recurtion Relation
//     cout << n << endl;  // 1,2,3,4,5,......

// }

// int main()
// {
//     int n;
//     cout<<"user input is: ";
//     cin >> n;
//     cout<<endl;
//     Print(n);
//     return 0;
// }
