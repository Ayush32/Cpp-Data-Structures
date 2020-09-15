/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    // base case
    if (n == 1)
    {
        return;
    }
    // recursive case

    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    bubble_sort(a, n - 1);
}

void bubble_sort_recursive(int a[], int j, int n)
{
    // base case
    if (n == 1)
    {
        return;
    }
    // base case

    if (j == n)
    {
        return;
    }
    // recursive case

    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }
    bubble_sort_recursive(a, j + 1, n - 1);
}

int main()
{

    int a[] = {5, 4, 3, 1, 2, 6, 7, 3, 6, 35, 67, 35, 3, 42, 53};
    int n = sizeof(a) / sizeof(int);
    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    bubble_sort_recursive(a, 0, n);
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}