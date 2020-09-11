/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

bool canPlaceCows(int stalls[], int n, int c, int min_Step)
{
    int last_cow = stalls[0];
    // place the first cows in the first stall
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_cow >= min_Step)
        {
            last_cow = stalls[i];
            cnt++;
            if (cnt == c)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, cows;

    cin >> n >> cows;
    int stalls[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
    }

    int s = 0;

    int e = stalls[n - 1] - stalls[0];
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        bool cowsRakhPaye = canPlaceCows(stalls, n, cows, mid);
        if (cowsRakhPaye)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans;
}