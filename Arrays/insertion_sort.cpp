/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int insertion_Sort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int e = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = e;
    }
    return 0;
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
    insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}