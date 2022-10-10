#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows to print pattern ";
    cin >> n;

    int count = 1;
    cout << "The required pattern is " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}