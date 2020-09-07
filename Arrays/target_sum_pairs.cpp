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
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                if (arr[i] < arr[j])
                {
                    cout << arr[i] << " and " << arr[j] << endl;
                    ;
                }
                else
                {
                    cout << arr[j] << " and " << arr[i] << endl;
                }
            }
        }
    }
    return 0;
}