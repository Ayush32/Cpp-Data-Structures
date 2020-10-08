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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    cin >> k;
    int count = 0;
    int min;
    int ans = 0;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        min = arr[0];
        if (min == arr[i])
        {
            count++;
            if (count == k)
            {
                ans = min;
            }
        }
        else
        {
            min = arr[i + 1];
        }
    }

    cout << ans;
    return 0;
}