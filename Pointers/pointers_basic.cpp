/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << &x << endl;

    float y = 10.5;
    cout << &y << endl;

    char ch = 'A';
    //  not work for character variables
    cout << &ch << endl;
    // for print the character address
    // explicit type casting is required

    cout << (void *)&ch << endl;

    // pointers
    int a = 10;
    int *aptr;
    aptr = &a;
    cout << &a << endl;
    cout << aptr << endl;

    // ressign the address to the variable
    int b = 20;
    aptr = &b;
    cout << &b << endl;
    cout << aptr << endl;

    return 0;
}