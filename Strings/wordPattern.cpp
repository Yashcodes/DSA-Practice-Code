#include <bits/stdc++.h>
using namespace std;

void wordPattern(string str)
{
    int n = str.length();
    string s;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (str[j] != ' ')
        {
            s.push_back(str[j]);
            j++;
        }

        int r = s.length();
        cout << r << " ";
        s.clear();
    }
}

int main()
{
    string str;
    cout << "Enter the string to print pattern : ";
    getline(cin, str);

    wordPattern(str);

    return 0;
}