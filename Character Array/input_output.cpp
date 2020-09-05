/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    char a[10] = {'a', 'b', 'c', 'd', '\0'};
    cout << a << endl;

    char s1[10] = {'h',
                   'e',
                   'l',
                   'l',
                   'o', '\0'}; // does not terminate with null
    char s2[] = "hello";
    cout << s1 << " " << sizeof(s1) << endl; // 5 bytes
    cout << s2 << " " << sizeof(s2) << endl; // 6 bytes
    return 0;
}