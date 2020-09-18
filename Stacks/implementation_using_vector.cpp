/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    vector<int> v;

public:
    // push the element
    void push(int data)
    {
        v.push_back(data);
    }

    bool empty()
    {
        return v.size() == 0;
    }
    // pop/remove the element

    void pop()
    {
        if (!empty())
        {
            v.pop_back();
        }
    }

    int top()
    {
        return v[v.size() - 1];
    }
};

int main()
{
    Stack s;

    for (int i = 0; i <= 5; i++)
    {
        s.push(i * i);
    }
    // try
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}