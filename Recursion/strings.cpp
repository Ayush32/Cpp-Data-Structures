/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

int countString(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 2;
    }
    return countString(n - 1) + countString(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << countString(n);
    return 0;
}
