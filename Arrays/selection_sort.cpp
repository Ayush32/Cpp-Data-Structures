/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

// selection sort;

int selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        // find out the smallest element in the unsorted prt
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // after this loop we can do swap finally
        swap(arr[i], arr[min_index]);
    }
    return 0;
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
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}