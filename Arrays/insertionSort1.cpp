#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];

        while (j > -1 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements for the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calling the sorting function
    insertionSort(arr, n);

    cout << "The sorted array is : ";

    // Calling the print function
    printArray(arr, n);

    return 0;
}