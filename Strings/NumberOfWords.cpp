#include <bits/stdc++.h>
using namespace std;

int wordsCount(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == (str.length() - 1))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string str;
    cout << "Enter the string to check number of words : ";
    getline(cin, str);

    cout << endl;
    cout << "The total number of words in the string are " << wordsCount(str) << endl;
    return 0;
}
