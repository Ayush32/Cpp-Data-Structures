/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

void rotate_stl(int a[][1000], int n)
{
    // same thing using stl reverse(start_container, end_Container) methods

    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void display(int a[][1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}

int main()
{

       int n;
    cin >> n;
    int a[1000][1000];

    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n; col++)
        {

            cin >> a[row][col];
        }
    }
    rotate_stl(a, n);
    display(a, n);
    return 0;
}