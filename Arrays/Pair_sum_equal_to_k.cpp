/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int key;
    int a[1000];
    int left;
    int right;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == key)
            {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
    return 0;
}