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
    int arr1[n], arr2[n], arr3[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr3[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    sort(arr3, arr3 + n);

    cout << "first " << arr1[5] << " "
         << "second " << arr2[5] << " "
         << "third " << arr3[5];
    return 0;
}