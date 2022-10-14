#include <bits/stdc++.h>
using namespace std;

void printPattern(string s)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < s.length() + 2; j++)
        {
            if (i == 1 && j > 0 && j < s.length() + 2)
            {
                cout << s;
                cout << "*";
                break;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void words(string s)
{
    string word = "";
    string ans = "";
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == ' ')
        {
            if (word.size() > 0)
            {
                ans += word;
                word = "";
                count++;
            }

            printPattern(ans);
            ans = "";
            cout << endl;
        }
        else
        {
            word = word + s[i];
        }
    }

    if (word.size() > 0)
    {
        ans += word;
        word = "";
        count++;

        printPattern(ans);
        ans = "";
    }
}

int main()
{
    string s;
    getline(cin, s);

    cout << "The pattern is :-" << endl
         << endl;

    words(s);

    return 0;
}