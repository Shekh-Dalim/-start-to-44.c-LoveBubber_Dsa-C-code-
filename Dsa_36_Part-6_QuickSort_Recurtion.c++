// 2 time

/************* Quick Sort  ***********/


#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];  // step_1 -> Take an pivot element

    int cnt = 0;        // Step_2 -> Count element (element < pivot)
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;  // Step_3 -> s+count
                                                                                
    swap(arr[pivotIndex], arr[s]); //place pivot at right position       

    // Step_4 -> 
    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) { // This condition may or may not be use 
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);  // p means pivot Index

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}