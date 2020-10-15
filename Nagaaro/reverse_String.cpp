/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    cin.get(s, 1000);
    int len = strlen(s);
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            s[i] = '\0';
            cout << &(s[i]) + 1 << " ";
        }
    }
    cout << s;
    return 0;
}