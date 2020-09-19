/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}