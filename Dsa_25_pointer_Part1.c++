// 2 time


/************     pointer  ********** */

//  MCQ: that the data can be of any type , char, double, float, string or integer ,your pointer will only store the adress

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     double num1 = 5;
//     cout << "The num value is: " << num << endl;

//     // Adress of opeartor
//     cout << " Adress of num is: " << &num << endl; // Adress is form of hexaDecimal formate

//     int *ptr = &num;
//     double *ptr1 = &num1;
//     cout << "Adress of num is " << ptr << endl; // Ptr mai jo adress hai usee print kar dia
//     cout << "Value of num is " << *ptr << endl; // '*' is a dereference operator   //ptr adress mai jo value print hai usee print kar dia

//     cout << "Size of integer value " << sizeof(num) << endl;
//     cout << "Size of pointer value " << sizeof(ptr) << endl;
//     cout << "Size of pointer value " << sizeof(ptr1) << endl;
//     return 0;
// }

/*******************  Different pointer concept *************** */

/*
int *p = 0;
p = &i;  

this two line are same ,,can be written in one line   int *p = &i;

*/
#include <iostream>
using namespace std;
int main()
{
/*  Not a good Practice */
// int *p;   // pointing to a garbage adress
// cout<<*p<<endl;

// /*  Good practice  */
// int *p = 0;   // pointing to a NULL
// cout<<*p<<endl;

// int i = 5;
// int *p = 0;
// p = &i;

// cout<<p<<endl;
// cout<<*p<<endl;

/*********  2 cases  ***** */
// int num = 5;

/* Case 1 */
// int a = num;
// cout << "Before: " << num << endl;
// a++;
// cout << "After: " << num<<endl;

// /* Case 2 */
// int *p = &num;
// cout << "Before: " << num << endl;
// (*p)++;
// cout << "After: " << num<<endl;

/* case 3*/
// int *p = &num;
// cout << "Before: " << num << endl;
// int *a = p;
// (*a)++;
// cout<<"After: "<<num;

/* case 4 Coping a popinter */
// int num = 5;
// int *p = &num;
// int *q = p; 
// // int *q = &p;  // Why throw errpr study clearly
// // int *q = *p;  // Why throw errpr study clearly
// cout << p << " - " << q << endl;
// cout << *p << " - " << *q << endl;


/* case 5 */
int a = 3;
int *b = &a;
int *t = b;
cout << (*t)++ << endl;
*t = *t + 1;
cout<< *t<<endl;
cout<<"Before t: "<<t<<endl;
t = t+1;
cout<<"After t : "<<t<<endl;
    return 0;
}
