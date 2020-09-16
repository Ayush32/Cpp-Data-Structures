/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> d{
        1,
        2,
        3,
        4,
        5,
        6,
    };
    // add element from last O(!)

    d.push_back(16);

    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;
    // pop element from last O(1)

    d.pop_back();
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;

    // insert some element at specific position O(n);
    d.insert(d.begin() + 3, 4, 100);

    // erase some element int the middle
    d.erase(d.begin() + 2);
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;

    d.clear();

    if (d.empty())
    {
        cout << "vector is empty";
    }

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    d.push_back(13);
    cout << endl;

    cout << d.front() << endl; // print the first element
    cout << d.back() << endl;  // print the last element

    // reserve

}