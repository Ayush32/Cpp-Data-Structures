/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

int main()
{

    int m, n;
    int a[m][n];

    cin >> m >> n;

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> a[row][col];
        }
    }
    int key;
    cin >> key;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (a[i][j] == key)
            {
                cout << "Element found at (" << i << ", " << j << ")\n";
            }
        }
    }
    return 0;
}
