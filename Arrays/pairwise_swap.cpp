/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;
void pairSwap(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {

            swap(a[j], a[j + 1]);
        }
    }
}

int main()
{
    int n;
    int i;
    int arr[1000];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pairSwap(arr, n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}