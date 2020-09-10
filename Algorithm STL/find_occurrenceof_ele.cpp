/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    auto lb = lower_bound(a, a + n, key);
    auto ub = upper_bound(a, a + n, key);

    cout << "Occurrence of " << key << " in array is " << (ub - lb);
    return 0;
}