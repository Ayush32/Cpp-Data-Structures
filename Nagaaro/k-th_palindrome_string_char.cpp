/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int iskPalRec(string s1, string s2, int m, int n)
{
    if (m == 0)
    {
        return n;
    }
    if (n == 0)
    {
        return m;
    }
    if (s1[m - 1] == s2[n - 1])
    {
        return iskPalRec(s1, s2, m - 1, n - 1);
    }
    return 1 + min(iskPalRec(s1, s2, m - 1, n), iskPalRec(s1, s2, m, n - 1));
}

bool isKPal(string s, int k)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    int len = s.length();
    return (iskPalRec(s, rev, len, len) <= k * 2);
}

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    if (isKPal(s, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}