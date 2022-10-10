#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int sum = 0;
    int temp = n;

    while (n > 0)
    {
        int digit = n % 10;
        sum = (sum * 10) + digit;
        n = n / 10;
    }

    if (sum == temp)
        return true;

    return false;
}

int main()
{
    int n;
    cout << "Enter the number to check palindrome : ";
    cin >> n;

    int ans = palindrome(n);

    if (ans)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }

    return 0;
}