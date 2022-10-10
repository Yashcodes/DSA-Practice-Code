#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void printVector(vector<int> &v)
{
    for (auto x : v)
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
    bubbleSort(v);

    cout << "The sorted array is : ";
    
    // Calling the print function
    printVector(v);

    return 0;
}