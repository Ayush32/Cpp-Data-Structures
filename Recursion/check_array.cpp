/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    if (n == 0 or n == 1)
    {
        return true;
    }

    // recursive case
    if (a[0] < a[1] and isSorted(a + 1, n - 1))
    {
        return true;
    }
    return false;
}

int maine()
{
    int arr[] = {8, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << isSorted(arr, n) << endl;
    return 0;
}