/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    vector<int> res;
    int start = 0;
    int end = arr.size() - k - 1;
    while (start <= end)
    {
        int mid = (end - start) / 2 + start;
        if ((x - arr[mid]) > (arr[mid + k] - x))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    for (int i = start; i < start + k; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int x, k;
    cin >> x;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    findClosestElements(arr, k, x);
    return 0;
}