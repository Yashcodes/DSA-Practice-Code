#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void heapify(int i, int size)
{
    int ans = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && v[ans] < v[left])
    {
        ans = left;
    }

    if (right < size && v[ans] < v[right])
    {
        ans = right;
    }

    if (ans != i)
    {
        swap(v[ans], v[i]);
        heapify(ans, size);
    }
}

void buildHeap()
{
    int n = v.size();

    for (int i = (n / 2) - 1; i > -1; i--)
    {
        heapify(i, n);
    }
}

void heapSort()
{
    buildHeap();

    for (int i = v.size() - 1; i > 0; i--)
    {
        swap(v[0], v[i]);
        heapify(0, i);
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

    v.resize(n);

    cout << "Enter the elements for the vector to be sorted : ";
    for (auto &x : v)
    {
        cin >> x;
    }

    heapSort();

    cout << "The sorted array is : ";
    printVector(v);

    return 0;
}