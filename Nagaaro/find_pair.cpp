/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void printclosest(int arr1[], int arr2[], int m, int n, int x)
{
    int diff = INT_MAX;
    int left, right;

    int l = 0;
    int r = n - 1;
    while (l < m && r >= 0)
    {
        if (abs(arr1[l] + arr2[r] - x) < diff)
        {

            left = l;
            right = r;
            diff = abs(arr1[l] + arr2[r] - x);
        }
        if (arr1[l] + arr2[r] > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "The closest pair is [" << arr1[left] << ", " << arr2[right] << "]" << endl;
}

int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int arr1[m];
    int arr2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int x;
    cin >> x;

    printclosest(arr1, arr2, m, n, x);

    return 0;
}
