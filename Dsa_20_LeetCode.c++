
//  2 time


/************ Q: Reverse Number ******** */

// #include <iostream>
// using namespace std;

// void reverseNum(int arr[], int size)
// {
//   int i = 0;
//   int j = size - 1;
//   while (i < j)
//   {
//     swap(arr[i], arr[j]);
//     i++;
//     j--;
//   }
// }

// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   reverseNum(arr, size);

//   cout << "Reversed array is: ";
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

/*************  Q: Reverse an array using vector ********** */

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> v)
// {
//   int s = 0;
//   int e = v.size() - 1;

//   while (s <= e)
//   {
//     swap(v[s], v[e]);
//     s++;
//     e--;
//   }
//   return v;
// }
// void print(vector<int> v)
// {
//   for (int i = 0; i < v.size(); i++)
//   {
//     cout << v[i] << " ";
//   }

//   cout << endl;
// }

// int main()
// {
//   vector<int> v;
//   v.push_back(11);
//   v.push_back(7);
//   v.push_back(3);
//   v.push_back(4);

//   vector<int> ans = reverse(v); // Store the ans
//   cout << "Printing reverce array: ";
//   print(ans); // Print the ans

//   return 0;
// }

/********  Q:1 Reverse the array after that position ******* */
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> v,int m) //m is index number
// {
//   int s = m+1;
//   int e = v.size() - 1;

//   while (s <= e)
//   {
//     swap(v[s], v[e]);
//     s++;
//     e--;
//   }
//   return v;
// }
// void print(vector<int> v)
// {
//   for (int i = 0; i<v.size();i++){
//     cout<<v[i]<<" ";
//   }

//   cout << endl;
// }

// int main()
// {
//   vector<int> v;
//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(5);
//   v.push_back(6);

//   vector<int> ans = reverse(v,3); //Store the ans
//   cout<<"Printing reverce array: ";
//   print(ans);  // Print the ans

//   return 0;
// }

/**************** Q:2  Question related Merge sort *********** */

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
  int i = 0, j = 0, k = 0;
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k] = arr1[i];
      k++;
      i++;
      // arr3[k++] = arr1[i++];   //Above 3 line in one line
    }
    else
    {
      arr3[k] = arr2[j];
      k++;
      j++;
      // arr3[k++] = arr2[j++]; // Above 3 line in one line
    }
  }
  // Copy the first array element
  while (i < n)
  {
    arr3[k] = arr1[i];
    k++;
    i++;
    // arr3[k++] = arr1[i++ ]; // Above 3 line in one line

  }
  // Copy the 2nd array element
  while (i < m)
  {
    arr3[k] = arr2[j];
    k++;
    i++;
    // arr3[k++] = arr2[j++];// Above 3 line in one line
  }
}

void print(int ans[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[3] = {2, 4, 6};

  int arr3[8] = {0}; // Starting mai sab 0 dala hua hai

  merge(arr1, 5, arr2, 3, arr3);
  print(arr3, 8);

  return 0;
}

/****************** Q:Move Zeroes ************** */

// #include <iostream>
// using namespace std;

// void MoveZero(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 0; j < n; j++)
//   {
//     // if (arr[j] != 0)  // Output : 1 3 12 0 0 
//     if (arr[j] == 0)  // Output: 0 0 1 3 12
//     {
//       swap(arr[j], arr[i]);
//       i++;
//     }
//   }
// }
// int PrintArray(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// int main()
// {
//   int n = 5;
//   int arr[] = {0, 1, 0, 3, 12};
//   PrintArray(arr, n);
//   MoveZero(arr, n);
//   PrintArray(arr, n);

//   return 0;
// }



