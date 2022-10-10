#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = v[i];

        while (j > -1 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

void printVector(vector<int> v)
{
    for (auto &x : v)
    {
        cout << x << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements for the vector : ";
    for (auto &x : v)
    {
        cin >> x;
    }

    // Calling the sorting function
    insertionSort(v);

    cout << "The sorted array is : ";

    // Calling the print function
    printVector(v);

    return 0;
}