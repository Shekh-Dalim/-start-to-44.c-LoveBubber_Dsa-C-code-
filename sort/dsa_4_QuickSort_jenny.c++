/********  Quick Sort **********/


#include <iostream>
using namespace std;

void InputData(int A[], int n)
{
    cout << "Input the Array number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void Display(int A[], int n)
{
    cout << "Display the Array Number: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int Partiotion(int A[], int lb, int ub)
{
    int pivot = A[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (A[start] <= pivot)
        {
            start++;
        }
        while (A[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(A[start], A[end]);
        }
    }
    swap(A[lb], A[end]);
    return end;
}

void QuickSort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = Partiotion(A, lb, ub);
        QuickSort(A, lb, loc - 1);
        QuickSort(A, loc + 1, ub);
    }
}

int main()
{
    int n;
    cout << "size of n is: ";
    cin >> n;
    int A[n];
    int lb = 0;
    int ub = n - 1;
    InputData(A, n);
    Display(A, n);
    QuickSort(A, lb, ub);
    Display(A, n);

    return 0;
}
