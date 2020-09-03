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

// define a comparator function

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    int i;
    int arr[1000];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}
