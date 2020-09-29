/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int i;
    int index = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    nums.push_back(target);
    sort(nums.begin(), nums.end());
    return;
}

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
    int target;
    cin >> target;
    cout << searchInsert(nums, target);
    for (int c : nums)
    {
        cout << c << " ";
    }
}