#include <bits/stdc++.h>
using namespace std;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        return true;
    }

    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        return true;
    }

    return false;
}

int countVowel(string st)
{
    int count = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (isVowel(st[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string st;
    cout << "Enter the string to count vowels : ";
    getline(cin, st);

    cout << "The number of vowels in the string are " << countVowel(st) << endl;

    return 0;
}