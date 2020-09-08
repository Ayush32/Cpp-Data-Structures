/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void spiral_print(int a[][1000], int m, int n)
{
    int startrow = 0;
    int endrow = m - 1;
    int startcol = 0;
    int endcol = n - 1;
    while (startrow <= endrow && startcol <= endcol)
    {
        for (int i = startrow; i <= endrow; i++)
        {
            cout << a[i][startcol] << ", ";
        }
        startcol++;
        for (int i = startcol; i <= endcol; i++)
        {
            cout << a[endrow][i] << ", ";
        }
        endrow--;
        // bottom row
        if (endcol >= startcol)
        {
            for (int i = endrow; i >= startrow; i--)
            {
                cout << a[i][endcol] << ", ";
            }
            endcol--;
        }
        if (startrow <= endrow)
        {
            for (int i = endcol; i >= startcol; i++)
            {
                cout << a[startrow][i] << ", ";
            }
            startrow++;
        }
    }
}
int main()
{
    int m, n;

    cin >> m >> n;
    int arr[1000][1000];
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }
    spiral_print(arr, m, n);

    return 0;
}