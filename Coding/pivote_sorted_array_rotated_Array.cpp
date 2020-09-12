/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int pivote(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > arr[s])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[e])
        {
            e = mid - 1;
        }
        else
        {
            return mid;
        }
    }
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
    cout << pivote(arr, n);
    return 0;
}