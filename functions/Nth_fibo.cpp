/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

//  0,1,1,2,3,5,8,13
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;

    for (int i = 1; i <= n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
    // if (n <= 1)
    // {
    //     return n;
    // }

    // return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}