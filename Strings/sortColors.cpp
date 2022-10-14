// This problem states that we have given three colors in unsorted format. We have to sort these colors. The colors are specified in numbers such that : red = 0, white = 1, blue = 2;

// Input : [0, 2, 1, 1, 2, 0, 0, 2] | Output : [0, 0, 0, 1, 1, 2, 2, 2]

// LeetCode : 75

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &v)
{
    int r = 0;
    int w = 0;
    int b = 0;

    // Counting the total number of specific colors
    for (auto &i : v)
    {
        if (i == 0)
            r++;
        else if (i == 1)
            w++;
        else
            b++;
    }

    int i = 0;

    while (i < r)
    {
        v[i] = 0;
        i++;
    }

    while (i < r + w)
    {
        v[i] = 1;
        i++;
    }

    while (i < r + w + b)
    {
        v[i] = 2;
        i++;
    }

    // Printing the new values
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