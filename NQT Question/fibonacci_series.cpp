/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int nextTerm = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
            continue;
        }
        if (i == 2)
        {
            cout << b << " ";
            continue;
        }
        nextTerm = a + b;
        ;
        a = b;
        b = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}