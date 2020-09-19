/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

class MinmaxStack
{
    vector<int> stack;
    vector<int> min_stack;
    vector<int> max_stack;

public:
    void push(int data)
    {
        int current_min = data;
        int current_max = data;

        if (min_stack.size())
        {
            current_min = min(min_stack[min_stack.size() - 1], data);
            current_max = max(max_stack[max_stack.size() - 1], data);
        }

        min_stack.push_back(current_min);
        max_stack.push_back(current_max);
        stack.push_back(data);
    }

    int get_min()
    {
        return min_stack[min_stack.size() - 1];
    }
    int get_max()
    {
        return max_stack[max_stack.size() - 1];
    }
    int top()
    {

        return stack[stack.size() - 1];
    }

    bool empty()
    {
        return stack.size() == 0;
    }

    void pop()
    {
        min_stack.pop_back();
        max_stack.pop_back();
        stack.pop_back();
    }

    void print()
    {
        for (int x : stack)
        {
            cout << x << " ";
        }

        cout << endl;

        for (int x : min_stack)
        {
            cout << x << " ";
        }
        cout << endl;

        for (int x : max_stack)
        {
            cout << x << " ";
        }

        cout << endl;
    }
};

int main()
{
    MinmaxStack s;

    s.push(1);
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(8);

    s.print();

    cout
        << s.get_max() << endl;
    s.pop();

    cout << s.get_min() << endl;

    cout << s.get_max() << endl;

    s.pop();
    s.pop();
    cout << s.top() << endl;
    cout << s.get_max() << endl;
}