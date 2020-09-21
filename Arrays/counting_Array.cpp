/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    vector<int> v2 = {-1};
    int count;
    int i;
    int j;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {

                count++;
            }
        }
        }
    for (int x : v2)
    {
        cout << x << " ";
    }
}