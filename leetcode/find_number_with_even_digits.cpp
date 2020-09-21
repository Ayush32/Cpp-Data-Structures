/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int findEven(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int even = a[i];

        string s = to_string(even);
        if (s.length() % 2 == 0)
        {
            count = count + 1;
        }
    }

    return count;
}

int main()
{
    int n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findEven(arr, n);
    return 0;
}