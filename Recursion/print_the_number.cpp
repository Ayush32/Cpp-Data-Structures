/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void increase(int N)
{
    if (N == 0)
    {
        return;
    }
    // rec case

    increase(N - 1);
    cout << N << " ";
}

void decrease(int N)
{
    // base case
    if (N == 0)
    {
        return;
    }
    // rec case

    cout << N << " ";
    decrease(N - 1);
}

int main()
{
    int n;
    cin >> n;
    increase(n);
    cout << endl;
    decrease(n);
    return 0;
}