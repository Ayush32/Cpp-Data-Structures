/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void permutation(string s1, int s, int e)
{

    if (s == e)
    {
        cout << s1 << endl;
    }

    else
    {
        for (int i = s; i <= e; i++)
        {
            swap(s1[s], s1[i]);
            permutation(s1, s + 1, e);
            swap(s1[s], s1[i]);
        }
    }
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int n = s1.length();

    permutation(s1, 0, n - 1);

    string s3 = s2;

    reverse(s2.begin(), s2.end());

    if (s2 == s3)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not";
    }

    return 0;
}