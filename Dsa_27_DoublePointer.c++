// 2 time


/************* Double Pointer(Part - 3)************/

// #include <iostream>
// using namespace std;

// void update(int **p2)
// {
//     // p2 = p2 + 1;  // Update only in Update() funtion not in main funtion .
//     // *p2 = *p2+1;  // Update in Update() funtion as well as in main() funtion .
//     **p2 = **p2 + 1; // Update in Update() funtion as well as in main() funtion .
// }

// int main()
// {
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout << "Before: " << i << endl;
//     cout << "Before: " << p << endl; // Adress of i
//     cout << "Before: " << p2 << endl << endl; // Adress of p

//     update(p2);

//     cout << "After: " << i << endl;
//     cout << "After: " << p << endl;
//     cout << "After: " << p2 << endl;

//     // cout<<"Adress  of i"<<&i<<endl;
//     // cout<<"Adress  of i"<<p<<endl;
//     // cout<<"Adress  of i"<<*p2<<endl<<endl;

//     // cout<<"Adress  of i"<<p<<endl;
//     // cout<<"Adress  of p:"<<p2<<endl;
//     // cout<<"Adress  of p2:"<<&p2<<endl<<endl;

//     // cout<<"Value of i is: "<<i<<endl;
//     // cout<<"Value of i is: "<<*p<<endl;
//     // cout<<"Value of i is: "<<**p2<<endl<<endl;

//     return 0;
// }

// MCQ

// /************** Q:1 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int second = 18;
//     int *ptr = &second;
//     *ptr = 9;
//     cout << first << " " << second;
//     return 0;
// }

// /************** Q:2 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 6;
//     int *p = &first;
//     int *q = p;
//     (*q)++;
//     cout << first << endl;
//     return 0;
// }

// /************** Q:3 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int *p = &first;
//     cout << (*p)++ << " ";
//     cout << first << endl;
//     return 0;
// }

// //************** Q:4 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = 0;// p is an NULL pointer
//     int first = 110;
//     *p = first;  // error
//     // p = &first; // correct
//     cout << *p << endl;
//     return 0;
// }

// //************** Q:5 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8; // p is an NULL pointer
//     int second = 11;
//     int *third = &second;
//     first = *third;
//     *third = *third + 2;
//     cout << first << " " << second;
//     return 0;
// }

// //************** Q:6 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     float f = 12.5;
//     float p = 21.5;
//     float* ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout<< *ptr <<" "<<f<<" "<<p<<endl;
//     return 0;
// }

// //************** Q:7 **************/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int *ptr;
//     cout << sizeof(arr) << " " << sizeof(ptr) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second = (**q)++ + 9;
//     cout << first << " " << second;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     //     int first = 110;
//     //     int *p = &first;
//     //     int **q = &p;
//     //     int second = (**q)++ + 9;
//     //     cout << first << " " << second;

//     int arr[] = {11, 21, 31, 41};
//     int *ptr = arr++;  // update is not possible 
//     cout << *ptr << endl;

//     return 0;
// }
