/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int binary_seacrh(int a[], int s, int e, int key)
{

    if (s <= e)
    {
        int mid = (s + e) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            return binary_seacrh(a, s, mid - 1, key);
        }
        else
        {
            return binary_seacrh(a, mid + 1, e, key);
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << binary_seacrh(arr, 0, n - 1, key);

    return 0;
}