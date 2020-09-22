/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }

    int number = 0;
    number = stoi(s, 0, 8);
    cout << number << endl;
    return 0;
}