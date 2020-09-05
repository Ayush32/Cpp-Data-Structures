/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    // char a[][10] = {{'a', 'b', 'c', '\0'},
    //                 {'d', 'e', 'f', '\0'}};

    char a[][10] = {"abc", "def", "ghi", "hello"};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    return 0;
}