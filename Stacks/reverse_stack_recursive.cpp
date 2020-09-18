/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int data = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(data);
}

void reverseStack(stack<int> &s)
{
    // rec case
    // base casee

    if (s.empty())
    {
        return;
    }

    // otherwise
    // pop out the top element and insert it at the bottom

    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, x);
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // loop
    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ,";
        s.pop();
    }

    return 0;
}