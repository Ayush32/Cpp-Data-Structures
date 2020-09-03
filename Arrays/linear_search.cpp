/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

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
    int key;
    cin >> key;
    for (int i = 0; i <= n - 1; i++)
    {
        if (key == arr[i])
        {
            cout << key << " found at " << i << endl;
        }
    }
    if (i == n)
    {
        cout << "key is not found";
    }
    return 0;
}