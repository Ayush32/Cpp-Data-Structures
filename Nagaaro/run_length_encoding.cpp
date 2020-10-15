/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <bits/stdc++.h>
using namespace std;

void printRLE(string s)
{
    int n = s.size();

    for (int i = 0; i < n; i++)
    {

        int count = 0;
        while (i < n - 1 && s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        cout << s[i] << count;
    }
}

int main()
{
    string s;
    cin >> s;
    printRLE(s);
    return 0;
}