/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int palindrome(string s)
{
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s == s1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << palindrome(s);
    return 0;
}