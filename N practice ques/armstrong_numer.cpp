/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{

    int num, originalnum, remainder;
    int result = 0;
    cin >> num;

    originalnum = num;
    while (originalnum != 0)
    {
        remainder = originalnum % 10;
        result += remainder * remainder * remainder;
        originalnum /= 10;
    }
    if (result == num)
    {
        cout << "Yes amrstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}