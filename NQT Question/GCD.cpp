/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return GCD(a - b, b);
    }
    return GCD(a, b - a);

    // 2nd method
    /*
    if(b ==0){
        return a;
    }
    return GCD(b,a % b);
    */
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    cout << GCD(a, b);
    return 0;
}