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

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ' ' )
        {
            if (word.size() > 0 && checkpalindrome(word))
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
    if (word.size() > 0 && checkpalindrome(word))
    {
        word = "";
        count++;
    }

    return count;
}