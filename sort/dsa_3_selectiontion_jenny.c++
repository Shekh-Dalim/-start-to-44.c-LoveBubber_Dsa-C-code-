#include <iostream>
#include <math.h>
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
void selectionsort(int A[], int n) // unsorted loop
{
    for (int i = 0; i < n - 1; i++) // Pass
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] <= A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(A[i], A[min]);
        }
    }
}

int main()
{
    int n;
    cout << "size of n is: ";
    cin >> n;
    int A[n];
    InputData(A, n);
    Display(A, n);
    selectionsort(A, n);
    Display(A, n);

    return 0;
}
