#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string st)
{
    int start = 0;
    int end = st.size() - 1;

    while (start < end)
    {
        if (st[start] != st[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int countWords(string st)
{
    string word = "";
    int count = 0;

    stringstream ss(st);

    while (ss >> word)
    {
        count += checkpalindrome(word);
    }

    return count;
}

int main()
{
    string st;
    cout << "Enter the string to count palindromic words : ";
    getline(cin, st);

    cout << "The total number of palindromic words in the string are " << countWords(st);

    return 0;
}