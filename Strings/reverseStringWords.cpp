#include <bits/stdc++.h>
using namespace std;

void reverseStringWords(string st)
{
	string word = "";
	stringstream ss(st);

	while (ss >> word)
	{
		reverse(word.begin(), word.end());
		cout << word << " ";
	}
}

int main()
{
	string st;
	cout << "Enter the string to reverse individual word : ";
	getline(cin, st);

	reverseStringWords(st);

	return 0;
}