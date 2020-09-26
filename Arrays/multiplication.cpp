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
    int s1[n];
    int s2[n];
    int ans = 0;
    int count = 0;
    int k = 1;
    int s0 = 1;
    int b = 1;
    int m = 2;
    s1[0] = s0;
    s2[0] = s0;
    for (int i = 1; i < n; i++)
    {
        s1[i] = ((k * s1[i - 1] + b) % m + 1 + s1[i - 1]);
        s2[i] = s1[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = s1[i] * s2[j];

            cout << s1[i] << " * " << s2[j] << " = " << ans << endl;
            if (ans <= 4)
            {
                count++;
            }
        }
    }
    cout << count;
}