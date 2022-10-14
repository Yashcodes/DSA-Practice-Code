// The concept of this is same as the pervious question but the approach here is different. Here we are going to use two pointer approach.

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;

    int k = 0;
    while (k <= j)
    {
        if (k == 0)
        {
            swap(v[i], v[k]);
            i++;
        }

        if (k == 2)
        {
            swap(v[j], v[k]);
            j--;
        }

        if (k == 1)
        {
            continue;
            k++;
        }
    }

    for (auto &i : v)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the values of the colors to sort : ";
    for (auto &i : v)
    {
        cin >> i;
    }

    cout << "The sorted colors are : ";
    sortColors(v);

    return 0;
}