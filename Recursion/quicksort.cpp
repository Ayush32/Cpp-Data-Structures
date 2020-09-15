/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{
    int i = s - 1;
    int j = s;
    int pivot = a[e];

    for (; j <= e - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i = i + 1;
            swap(a[i], a[j]);
        }
        j = j + 1;
    }

    swap(a[i + 1], a[e]);
    return i + 1;
}

void quicksort(int a[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);

    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);

    // recursive case
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}