/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

int insertion_sort(int arr[], int n)
{
    // N- 1 large elements to the end
    for (int i = 1; i < n - 1; i++)
    {
        int e = arr[i];
        // place the current elements at right position in sorted part
        int j = i - 1;
        while (j >= 0 and arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = e;
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
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}