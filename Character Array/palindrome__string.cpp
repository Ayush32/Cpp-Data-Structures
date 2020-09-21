/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
#include <cstring>
using namespace std;

bool Palind(char a[])
{
    int s = 0;
    int e = strlen(a) - 1;

    while (e > s)
    {
        if (a[s++] != a[e--])
        {
            return false;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    char a[1000];
    cin.get();

    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
    }

    if (Palind(a))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "Not";
    }
}