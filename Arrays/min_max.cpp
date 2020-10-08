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
    vector<int>
        v;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    sort(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum - max << " " << sum - min;
    return 0;
}