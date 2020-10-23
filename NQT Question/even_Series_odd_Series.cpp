/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int i, n, a = 1, b = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            a = a * 2;
        }
        else
        {
            b = b * 3;
        }
    }
    if (n % 2 != 0)
    {
        cout << a / 2;
    }
    else
    {
        cout << b / 3;
    }
    return 0;
}