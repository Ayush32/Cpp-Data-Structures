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
    int arr[m][n];
    if ((m >= 1 && m <= 10) && (n >= 1 && n <= 10))
    {

        for (int row = 0; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cin >> arr[row][col];
            }
        }
    }
    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                cout << arr[row][col] << ", ";
            }
        }
        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << arr[row][col] << ", ";
            }
        }
    }
    cout << "END";

    return 0;
}