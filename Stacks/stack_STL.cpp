/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    for (int i = 0; i <= 5; i++)
    {
        s.push(i);
    }

    // loop

    while (!s.empty())
    {
        cout << s.top() << " ,";
    }
    while (!s.empty())
    {
        s.pop();
        cout << s.top() << " ,";
    }
    return 0;
}