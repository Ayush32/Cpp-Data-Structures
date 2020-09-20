/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    for (int i = 0; i <= 10; i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        cout << q.front() << " <- ";
        q.pop();
    }

    return 0;
}