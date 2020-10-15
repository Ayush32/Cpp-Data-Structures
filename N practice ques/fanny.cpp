/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void removeChar(char *s, char c)
{
    int j;
    int n = strlen(s);
    for (int i = j = 0; i < n; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main()
{
    char s[1000];
    cin.get(s, 1000);
    char c;
    cin >> c;
    removeChar(s, c);
    cout << s;
    return 0;
}