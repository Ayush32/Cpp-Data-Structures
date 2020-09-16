/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b(5, 10); //five int wtih value 10

    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 3, 4, 5, 6};

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ",";
    }
    cout << endl;

    // iterarting vector 2nd ways

    for (auto it = b.begin(); it != b.end(); it++)
    {
        cout << (*it) << ",";
    }
    cout << endl;

    // 3rd way

    for (int x : d)
    {

        cout << x << ",";
    }
}