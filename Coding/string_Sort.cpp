/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{

    if (a.length() == b.length())
    {
        return a < b;
    }

    else if (a.length() > b.length())
    {
        return a > b;
    }
}
int main()
{
    int n;
    cin >> n;
    cin.get();
    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}