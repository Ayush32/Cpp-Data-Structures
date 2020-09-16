/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        v.push_back(number);
    }

    for (int x : v)
    {
        cout << x << ",";
    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    return 0;
}