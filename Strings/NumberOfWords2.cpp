#include <bits/stdc++.h>
using namespace std;

int countWords(string st)
{
    string word = "";
    int count = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ' ')
        {
            if (word.size() > 0)
            {
                word = "";
                count++;
            }
        }
        else
        {
            word += st[i];
        }
    }
    if (word.size() > 0)
    {
        word = "";
        count++;
    }

    return count;
}

int main()
{
    string st;
    cout << "Enter the string to calculate number of words : ";
    getline(cin, st);

    int ans = countWords(st);
    cout << "The number of words in the string are " << ans << endl;

    return 0;
}