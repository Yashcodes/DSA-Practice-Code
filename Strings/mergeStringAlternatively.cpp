// This program consists of two strings in which we are given two separate strings. We are supposed to merge these string's characters alternatively means one word from first string and then the second from the another string. Example : "abc" , "pqr" => "apbqcr";

// LeetCode : 1768

#include <bits/stdc++.h>
using namespace std;

string mergeStringAlternatively(string word1, string word2)
{
    int i = 0;
    int j = 0;
    string ans = "";

    while (i < word1.size() && j < word2.size())
    {
        ans += word1[i];
        i++;

        ans += word2[j];
        j++;
    }

    while (i < word1.size())
    {
        ans += word1[i];
        i++;
    }

    while (j < word2.size())
    {
        ans += word2[j];
        j++;
    }

    return ans;
}

int main()
{
    string word1, word2;

    cout << "Enter the first string : ";
    getline(cin, word1);

    cout << "Enter the second string : ";
    getline(cin, word2);

    cout << "The merged string will be : " << mergeStringAlternatively(word1, word2);
    return 0;
}