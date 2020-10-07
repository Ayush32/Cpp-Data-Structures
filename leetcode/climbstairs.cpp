/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int climbStairs(int n)
{
    long newn = n;
    if (newn == 1 || newn == 0 || newn == 2)
    {
        return newn;
    }

    return climbStairs(newn - 1) + climbStairs(newn - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << climbStairs(n);
    return 0;
}