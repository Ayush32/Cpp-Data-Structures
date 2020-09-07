/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T, n;

    cin >> T;

    long long int arr[1000000];
    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            currsum += arr[i];
            if (currsum < 0)
            {
                currsum = 0;
            }
            maxsum = max(currsum, maxsum);
        }

        cout << maxsum;
    }

    return 0;
}