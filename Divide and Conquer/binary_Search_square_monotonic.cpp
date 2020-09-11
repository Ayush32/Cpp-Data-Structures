/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

int square_root(int n)
{

    int s = 0;
    int e = n;

    float ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            ans = mid;
        }
    }
    // floating numbers

        return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << square_root(n) << endl;
    return 0;
}