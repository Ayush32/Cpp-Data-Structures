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
    int left;
    int right;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // generate all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            // elements of subarrays(i,j)
            currsum = 0;
            for (int k = i; k <= j; k++)
            {
                currsum += a[k];
            }
            // update maximum sum if currsum > maximumsum
            if (currsum > maximumsum)
            {
                maximumsum = currsum;
                left = i;
                right = j;
            }
        }
    }
    // print the maxsum
    cout << "Maximum Sum " << maximumsum << endl;
    // print the subarrays

    for (int k = left; k <= right; k++)
    {
        cout << a[k] << ",";
    }

    return 0;
}