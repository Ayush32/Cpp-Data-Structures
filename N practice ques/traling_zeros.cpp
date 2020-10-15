/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 5; i >= 1; i *= 5)
    {
        count += n / i;
    }
    cout << count;
    return 0;
}