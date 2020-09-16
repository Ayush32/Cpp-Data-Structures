/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int placeTiles(int n)
{
    if (n <= 3)
    {
        return 1;
    }

    if (n == 4)
    {
        return 2;
    }

    return placeTiles(n - 1) + placeTiles(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << placeTiles(n);
    return 0;
}