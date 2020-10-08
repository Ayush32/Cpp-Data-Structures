/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int largest = INT_MIN;
        int smallest = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int maxsum = 0;
        int minsum = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n - m; i++)
        {
            sum += arr[i];
            minsum = sum;
        }
        for (int i = m; i < n; i++)
        {
            maxsum += arr[i];
        }

        cout << maxsum - minsum << endl;
    }
    return 0;
}