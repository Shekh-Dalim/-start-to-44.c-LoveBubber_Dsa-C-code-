// 2 time


/******************* Macros, Global Variable, Inlinefuntion, DefaultArgs*************/

// Macro
//  #include <iostream>
//  using namespace std;
//  #define PI 3.14   // Compile hone sai pehele jaha jaha PI laga hua hai usmai 3.14 lag jaye giii  (Extra storage nehi legi because yee koi variable nehi hai)
//  int main()
//  {
//      int r = 5;
//      double area = PI * r * r;
//      // PI = PI+1; // we Can't update
//      cout << "Area is: " << area << endl;
//      return 0;
//  }

// Global variable
//  #include <iostream>
//  using namespace std;
//  int a= 10;
//  void print(){
//      cout<<a<<endl;
//  }
//  int main()
//  {
//      print();
//      int a= 100;
//      cout<<a;

//     return 0;
// }

// Inline Funtion
// #include <iostream>
// using namespace std;
// inline int getMax(int &a, int &b)  //Inline funtion
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1;
//     int b = 2;
//     int ans = 0;

//     ans = getMax(a, b);  // (a > b) ? a : b yee line direct 'getMax(a, b)' Iski jaga pai use ho jaye gi agar inline funtion hai to
//     cout << ans << endl;
//     a = a + 3;
//     b = b + 1;
//     ans = getMax(a, b);
//     cout << ans << endl;

//     return 0;
// }

// Default Argument

#include <iostream>
using namespace std;
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size);
    cout<<endl;
    print(arr, size,2);
    return 0;
}