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
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        nums.push_back(value);
    }

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1] or nums[i] < nums[i + 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}