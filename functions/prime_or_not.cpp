/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

//   print all prime number upto n

void printPrimes(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    long long int n;
    cin >> n;
    printPrimes(n);
    // if (isprime(n))
    // {
    //     cout << n << " is prime" << endl;
    // }
    // else
    // {
    //     cout << n << " not prime" << endl;
    // }

    return 0;
}