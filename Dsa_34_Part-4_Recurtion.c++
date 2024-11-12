// 2time 


/********** String with recurtion relation ********/



/*******************  Q: 1: Reverce a String using Recurtion Relation***************/

// #include <iostream>
// using namespace std;

// void reverse(string &str, int i, int j)  //  &str pass by reference 
// {
//     cout << "Call recieved for " << str << endl;
//     // Base Case
//     if (i > j)
//     {
//         return;
//     }

//     // Solve one case
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     reverse(str, i, j);
// }
// int main()
// {
//     string name = "dalim";
//     cout << endl;
//     reverse(name, 0, name.length() - 1);
//     cout << endl;
//     cout << name << endl;
//     return 0;
// }

/*******************  Q: 2: Palindrom using Recurtion Relation***************/

// #include <iostream>
// using namespace std;
// bool checkPalindrome(string str, int i, int j)
// {
//     // Base case
//     if (i > j) // sare case (i<j) pass karna complete matlab ans is true
//     {
//         return true;
//     }

//     // solve one case
//     if (str[i] != str[j])
//     {
//         return false;
//     }
//     else
//     {
//         return checkPalindrome(str, i+1, j-1);  // Recurtion relation
//     }
// }
// int main()
// {
//     string name = "abcba";
//     cout << endl;
//     bool ispalindrom = checkPalindrome(name, 0, name.length() - 1);
//     if (ispalindrom)
//     {
//         cout << "Its a palindrome " << endl;
//     }
//     else
//     {
//         cout << "Its not a palindrome " << endl;
//     }
//     return 0;
// }

/**************  Q:3 Power of 2  (power(2,n)) n is user input *************/

/**********  Solve by me (Too easy)  *********/
// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {
//     if(b==1){
//         return a;
//     }

//     return a * power(a,b-1);
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a, b);
//     cout << "Answer is: " << ans << endl;
//     return 0;
// }

/************* Solve by Love bubber (not easy way) ********/
// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {
//     // Base case
//     if (b == 0)
//     {
//         return 1;
//     }

//     // solve one case
//     if (b == 1)
//     {
//         return a;
//     }

//     // Recurtion call
//     int ans = power(a, b / 2);

//     // if b is even
//     if (b % 2 == 0)
//     {
//         return ans * ans;
//     }
//     // if b is odd
//     else
//     {
//         return a * ans * ans;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a, b);
//     cout << "Answer is: " << ans << endl;
//     return 0;
// }




/**************** Q:4: Bubble Sort using RR ****************/

// #include <iostream>
// using namespace std;
// void sortArray(int arr[], int n)
// {
//     // base case
//     if ((n == 0) || (n == 1)) // Already sorted
//     {
//         return;
//     }
//     // solve one case (large element shift into last position )
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
//     //Recurtion
//     sortArray(arr, n - 1);
// }
// int main()
// {
//     int arr[5] = {2, 5, 1, 6, 9};
//     sortArray(arr,5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

/**************** Q:5: Insertion Sort using RR ****************/
// #include <iostream>
// using namespace std;
// void insertionSort(int arr[], int i, int size)
// {
//   // Base case
//   if (i == size)
//   {
//     return;
//   }
//   // chek one condition
//   int temp = arr[i];
//   int j = i - 1;
//   while (j >= 0 && arr[j] > temp)
//   {
//     arr[j + 1] = arr[j];
//     j--;
//   }
//   arr[j + 1] = temp;
//   i = i + 1;
  
//   // Recurtion relation 
//   insertionSort(arr, i, size);
// }

// int main()
// {

//   int arr[6] = {5, 4, 10, 1, 6, 2};
//   insertionSort(arr, 0, 6);
//   for (int i = 0; i < 6; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }
/**************** Q:6: Selection Sort using RR ****************/
// #include <iostream>
// using namespace std;

// void sortArray(int arr[], int n, int i)
// {
//     // base case
//     if (i >= n - 1) // When i reaches the end of the array
//     {
//         return;
//     }

//     // solve one case (find the minimum element and place it at the beginning)
//     int min = i;
//     for (int j = i + 1; j < n; j++)
//     {
//         if (arr[j] < arr[min])
//         {
//             min = j;
//         }
//     }

//     // Swap the found minimum element with the element at index 'i'
//     if (min != i)
//     {
//         swap(arr[i], arr[min]);
//     }

//     // Recurtion for the rest of the array
//     sortArray(arr, n, i + 1);
// }

// int main()
// {
//     int arr[5] = {2, 5, 1, 6, 9};
//     sortArray(arr, 5, 0);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

