
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
void insertionsort(int A[], int n) // unsorted loop
{
    for (int i = 1; i < n; i++) // Pass
    {
        int temp = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
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
    insertionsort(A, n);
    Display(A, n);
    return 0;
}
