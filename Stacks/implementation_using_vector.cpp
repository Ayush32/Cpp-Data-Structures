/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> v;

public:
    // push the element
    void push(T data)
    {
        v.push_back(data);
    }
    // chec stack is empty or not
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
    //  return top of the stackm
    T top()
    {
        return v[v.size() - 1];
    }
};

int main()
{
    // Stack<int> s;
    Stack<char> s;

    for (int i = 65; i <= 70; i++)
    {
        s.push(i);
    }
    // try
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}