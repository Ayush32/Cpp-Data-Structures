/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void prime(int n)
{
    int i;
    int c = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c >= 1)
    {
        cout << "is not a prime " << n;
    }
    else
    {
        cout << "No. is prime " << n;
    }
}

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << " Please Enter a positive number";
    }
    else
    {
        prime(n);
    }
    return 0;
}
