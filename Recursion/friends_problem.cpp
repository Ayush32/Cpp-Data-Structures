/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int friends(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return 1;
    }

    return friends(n - 1) + friends(n - 1) * friends(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << friends(n);

    return 0;
}