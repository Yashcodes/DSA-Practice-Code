#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter the string to check palindrome : ";
    getline(cin, str);

    int ans = palindrome(str);

    if (ans)
    {
        cout << "The given string is a palindromic string";
    }
    else
    {
        cout << "The given string is not a palindromic string";
    }

    return 0;
}