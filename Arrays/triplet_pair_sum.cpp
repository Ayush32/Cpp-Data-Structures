/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int key;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if (arr[i] + arr[j] + arr[k] == key)
                {

                    cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}