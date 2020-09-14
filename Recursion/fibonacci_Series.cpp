/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int fibo(int N)
{
    // base case

    if (N == 0 or N == 1)
    {
        return N;
    }

    //    recursive call
    int f1 = fibo(N - 1);
    int f2 = fibo(N - 2);
    return f1 + f2;
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n) << endl;
    return 0;
}
