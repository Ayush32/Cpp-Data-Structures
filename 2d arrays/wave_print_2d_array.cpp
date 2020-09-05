/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;
    cin >> m >> n;

    int a[m][n] = {0};
    int value = 1;

    for (int row = 0; row <= m - 1; row++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            a[row][col] = value;
            value = value + 1;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            // even col - top to down
            for (int row = 0; row < m; row++)
            {
                cout << a[row][col] << " ";
            }
        }
        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << a[row][col] << " ";
            }
            // odd down to top
        }
    }

    return 0;
}