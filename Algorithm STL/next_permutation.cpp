/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //    rotate function
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    rotate(arr, arr + 2, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // apply on the same vector
    vector<int> v{
        1,
        2,
        3};
    // rotate(v.begin(), v.begin() + 3, v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // next permutation

    cout << next_permutation(v.begin(), v.end());
    // cout << next_permutation(v.begin(), v.end());
    cout << endl;
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}