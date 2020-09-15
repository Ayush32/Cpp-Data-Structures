/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void merge(int a[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[100];
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }
    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }
}

void mergeSort(int a[], int s, int e)
{
    // base sort if arr is 1 or 0
    if (s >= e)
    {
        return;
    }
    // follow 3 rules;
    // 1 Divide
    int mid = (s + e) / 2;

    // recursively  the arrays -  s,mid and mid + 1 ,e

    mergeSort(a, s, mid);
    mergeSort(a, mid + 1, e);

    // merge the two sorted array
    merge(a, s, e);
}

int main()
{
    int a[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}