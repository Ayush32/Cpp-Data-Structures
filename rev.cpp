/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    for (int i = -1000; i <= 1000; i++)
    {
        cin >> n;
        if (n < 0)
        {
            continue;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}