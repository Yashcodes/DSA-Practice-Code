// In this problem, we are given an array. We have also given a target or resultant value. We have to find the number of pairs such that their sum will be equal to the resultant.

#include <bits/stdc++.h>
using namespace std;

int twoPairSum(vector<int> &v, int t)
{
    int n = v.size();

    int i = 0;
    int j = n - 1;
    int count = 0;

    sort(v.begin(), v.end());

    while (i < j)
    {
        if (v[i] + v[j] == t)
        {
            count++;
            j--;
        }
        else if (v[i] + v[j] > t)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return count;
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

    int t;
    cout << "Enter the target value : ";
    cin >> t;

    cout << "The number of pairs whose sum produce target value are " << twoPairSum(v, t);

    return 0;
}