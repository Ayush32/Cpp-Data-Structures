/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int fact(int N)
{
    // base case

    if (N == 0)
    {
        return 1;
    }

    // recursive case
    int small_ans = fact(N - 1);
    int ans = N * small_ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;

    return 0;
}