/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    if (a == 0 or b == 0)
    {
        return 0;
    }
    int ans = a + multiply(a, b - 1);
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b);
    return 0;
}