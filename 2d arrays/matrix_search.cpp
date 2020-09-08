/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    int m, n, key;
    cin >> m >> n;

    int arr[m][n];
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }
    cin >> key;
    int count = 0;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == key)
            {
                count = 1;
            }
        }
    }
    if (count == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}