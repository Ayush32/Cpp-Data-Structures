/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int linear_Search(int a[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[0] == key)
    {
        return 0;
    }
    int i = linear_Search(a + 1, n - 1, key);
    if (i == -1)
    {
        return -1;
    }
    return i + 1;
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
    cout << linear_Search(arr, n, key);
    return 0;
}