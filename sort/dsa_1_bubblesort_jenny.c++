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
void bubblesort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++) // Pass
    {
        bool swapped = false;      // or take as -1               // if there is 'no swapping' then use swapped = false;
        for (int j = 0; j < n - 1 - i; j++) // Swap
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapped = true; // swapping has been done
            }
        }
        if (swapped == false)
        {
            break; // brak will exist from 'i' loop  // if there is no swapping then break the 'i' loop
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
    bubblesort(A, n);
    Display(A, n);

    return 0;
}
