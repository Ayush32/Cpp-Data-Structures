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
    int maximumsum = 0;
    int currsum = 0;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // kaden's ALGO

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maximumsum = max(currsum, maximumsum);
    }

    cout << "Maximum sum is " << maximumsum << endl;
}