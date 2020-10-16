
#include <bits/stdc++.h>
using namespace std;

char encodedChar(string str, int k)
{
    int i, j;
    int n = str.length();
    int len;
    int num;
    int freq;

    i = 0;
    while (i < n)
    {
        j = i;
        len = 0;
        freq = 0;

        while (j < n && isalpha(str[j]))
        {
            j++;
            len++;
        }
        while (j < n && isdigit(str[j]))
        {
            freq = freq * 10 + (str[j] - '0');
            j++;
        }
        num = freq * len;

        if (k > num)
        {
            k -= num;
            i = j;
        }
        else
        {
            k--;
            k %= len;
            return str[i + k];
        }
    }

    return str[k - 1];
}

// Driver Code
int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;

    cout << encodedChar(str, k) << endl;

    return 0;
}
