/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    // alloction and deallocation  done by the compiler

    int b[100];
    cout << sizeof(b) << endl;

    // dynamic allocation by the user
    int n;
    cin >> n;
    int *a = new int[n]{0};

    cout << sizeof(a) << endl;
    cout << a << endl; // variable a that is created inside
    // there b cant be overwritten

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
    }
}