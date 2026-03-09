#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    int arr[10];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, 10);
    printArray(arr, 10);

    return 0;
}