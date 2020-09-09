/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void increment(int a)
{
    a = a + 1;
    cout << "Inside Function: " << a << endl;
}

int main()
{
    int a = 10;
    increment(a);
    cout << "Inside Main :" << a;
    return 0;
}