/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int Highest(int arr[], int n)
{
    sort(arr, arr + n);

    return arr[1];
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] s;
    }
    cout << Highest(arr, n);
    return 0;
}