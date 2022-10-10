#include <bits/stdc++.h>
using namespace std;

string reverseString(string st)
{
    int start = 0;
    int end = st.size() - 1;

    while (start < end)
    {
        swap(st[start], st[end]);
        start++;
        end--;
    }

    return st;
}

void reverseStringWords(string st)
{
    string ans = "";
    string word = "";

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ' ')
        {
            if (word.size() > 0)
            {
                ans += reverseString(word);
                ans += ' ';
                word = "";
            }
        }
        else
        {
            word += st[i];
        }
    }
    if (word.size() > 0)
    {
        ans += reverseString(word);
    }
    cout << ans;
}

int main()
{
    string st;
    cout << "Enter the string to reverse individual words : ";
    getline(cin, st);

    reverseStringWords(st);

    return 0;
}