/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int i;

    swap(a, b);
    cout << a << " " << b << endl;

    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    return 0;
}
