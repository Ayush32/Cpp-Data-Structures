/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int power(int a, int n)
{

    if (n == 0)
    {
        return 1;
    }

    a = a * power(a, n - 1);
    return a;
}

int main()
{
    int a, n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}