/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <list>
using namespace std;

class Queue
{
    int current_size;
    list<int> l;

public:
    Queue()
    {
        current_size = 0;
    }

    bool isEmpty()
    {
        return current_size == 0;
    }

    void push(int data)
    {
        l.push_back(data);
        current_size = current_size + 1;
    }

    void pop()
    {
        if (!isEmpty())
        {
            current_size--;
            l.pop_front();
        }
    }

    int front()
    {
        return l.front();
    }
};

int main()
{
    Queue q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }

    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}