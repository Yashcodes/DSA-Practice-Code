#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
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
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> v(n);

    for (auto &x : v)
    {
        cin >> x;
    }

    insertionSort(v);
    printVector(v);
}