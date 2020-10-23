/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

long long GCD(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}

long long LCM(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << "LCM of " << a << " and " << b << " is " << LCM(a, b);
    return 0;
}