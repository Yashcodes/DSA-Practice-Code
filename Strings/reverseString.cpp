#include <bits/stdc++.h>
using namespace std;

string reverseString(string st)
{
    int n = st.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(st[start], st[end]);
        start++;
        end--;
    }

    return st;
}

int main()
{
    string st;
    cout << "Enter the string to perform reverse : ";
    getline(cin, st);

    string ans = reverseString(st);
    cout << ans << endl;
    return 0;
}