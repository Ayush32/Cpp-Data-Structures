/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

int main()
{

    int **arr;
    int r, c;

    cin >> r >> c;
    // create am 2d array
    arr = new int *[r];

    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }
    int val = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = val;
            val++;
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
