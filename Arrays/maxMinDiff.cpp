#include <bits/stdc++.h>
using namespace std;

int maxSort(vector<int> v)
{
    int n = v.size();
    int sum = 0;

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++)
    {
        sum += v[i];
    }

    return sum;
}

int minSort(vector<int> v)
{
    int n = v.size();
    int sum = 0;

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n - 1; i++)
    {
        sum += v[i];
    }

    return sum;
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector : ";
    for (auto &x : v)
    {
        cin >> x;
    }

    int ans = minSort(v) - maxSort(v);
    cout << ans;

    return 0;
}