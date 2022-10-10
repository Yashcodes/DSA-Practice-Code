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

void countVowels(string st)
{
    int count = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if (isVowel(st[i]))
        {
            count++;
        }
    }

    cout << "The number of vowels in the given string are " << count << endl;
}

int main()
{
    string st;
    cout << "Enter the string to count vowels : ";
    getline(cin, st);

    countVowels(st);

    return 0;
}