// 2 time


// /***************  Pointer Part-2 ***************/

// /***   1:  Int Array ***/
// #include <iostream>
// using namespace std;

// int main()

// {
//     // int arr[10] = {23, 122, 41, 67};
//     // cout<<"Adress of first memory block is: "<<arr<<endl;
//     // cout<<"Value of first memory block is: " <<arr[0]<<endl;
//     // cout<<"Adress of first memory block is: "<<&arr[0]<<endl;   // adress of first location

//     // cout<<"1_value: "<<*arr<<endl;         // value at 0th index
//     // cout<<"2_value: "<<*arr + 1<<endl;
//     // cout<<"3_value: "<<(*arr) + 1<<endl;
//     // cout<<"4_value: "<<*(arr) + 1<<endl;
//     // cout<<"5_value: "<<*(arr + 1)<<endl;   // value at 1th index
//     // cout<<"6_value: "<<*(arr + 2)<<endl;   // value at 2th index

//     // int i = 3;
//     // cout<<i[arr]<<endl;
//     // cout<<arr[i]<<endl;

//     // int temp[10] = {1, 2, 3, 4, 5, 6};
//     // cout << sizeof(temp) << endl;
//     // cout << sizeof(*temp) << endl;
//     // cout << sizeof(&temp) << endl;
//     // cout << *temp << endl;

//     // int *ptr = &temp[10];
//     // cout<<sizeof(ptr)<<endl;
//     // cout<<sizeof(*ptr)<<endl;
//     // cout<<sizeof(&ptr)<<endl;

//     // /**************** Different between arr and pointer ****************/
//     // int a[20] = {1,2,3,5};
//     // cout<<&a[0]<<endl;
//     // cout<<&a<<endl;
//     // cout<<a<<endl<<endl;

//     // int *p = &a[0];
//     // cout<< p <<endl;
//     // cout<< *p <<endl;
//     // cout<< &p <<endl;  // Adress of pointer

//     // int arr[10];
//     // // arr = arr + 1;  // Error

//     // // int *p = arr;   // correct
//     // int *p = &arr[0];  // correct
//     // p = p+1;           // correct
//     // cout<<p<<endl;     // Print 1st Adress
//     // return 0;
// }

/***  2:  Char Array ** */

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int arr[5] = {1,2,3,4,5};
//     // char ch[6] = "abcde"; // With null character char size is 6;  // In case of character ,,if we want to print first adress of 'ch' then entire character will be print

//     // cout<<arr<<endl;   // Print Adress
//     // cout<<ch<<endl;    // Print Entire Content

//     // char *c = &ch[0];
//     // cout << c << endl;  // Print Entire String
//     // cout << *c << endl; // Print first character of string

//     char ch1 = 'z'; // No null character is present
//     char *p = &ch1;
//     cout << p << endl;

//     return 0;
// }


/**** Funtion ***/

#include <iostream>
using namespace std;
// void print(int *p){
//     cout<<p<<endl;    // Adress
//     cout<<*p<<endl;   // Value
// }

// void update(int *p){

// /* ----------ADRESS-------- */
//     // p = p+1;
//     // cout<<"After: "<<p<<endl;  // In Update() funtion Adress is update but not in main() funtion.

//  /*--------- Value -------- */
//     *p = *p +1;
//     cout<<"After: "<<*p<<endl;  // In update() funtion value will be update as well as main() funtion also.
// }

int getSum(int arr[], int n)
// int getSum(int *arr, int n)
{
    cout<<"The size of: "<<sizeof(arr)<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // sum += i[arr]; same 
        
    }
    return sum;
}

int main()
{
    // int value = 5;
    // int *p =&value;

    // print(p);   //Print
    /* Adress updation */
    // cout<<"Before: "<<p<<endl;
    // update(p);
    // cout<<"After: "<<p<<endl;   // In main funtion Adress is not update.

    /* Value Updation */
    // cout<<"Before: "<<*p<<endl;
    // update(p);
    // cout<<"After: "<<*p<<endl;   // In main funtion value is update.

    /* SUM */
    int arr[6] = {1, 2, 3, 4, 5,6};
    // int SumValue =getSum(arr, 3);  // this can run in both case arr[],*arr
    int SumValue =getSum(arr+3, 3); // This can only pass in the case of *arr
    cout << "Sum is: " <<SumValue <<endl;

    return 0;
}