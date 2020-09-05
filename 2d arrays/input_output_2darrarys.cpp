/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{

    int a[5][3] = {0};
    int value = 1;

    for (int row = 0; row <= 4; row++)
    {
        for (int col = 0; col <= 2; col++)
        {
            a[row][col] = value;
            value = value + 1;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}