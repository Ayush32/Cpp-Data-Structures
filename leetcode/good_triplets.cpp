/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{

        int count = 0;
    int a = 7;
    int b = 2;
    int c = 3;
    vector<int> arr = {3, 0, 0, 1, 9, 7};
    int n = arr.size();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}