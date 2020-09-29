/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
            {

                return false;
            }
            if (c == ')' && stk.top() != '(')
            {
                return false;
            }
            if (c == '}' && stk.top() != '{')
            {
                return false;
            }
            if (c == ']' && stk.top() != '[')
            {
                return false;
            }
            stk.pop();
        }
    }

    return stk.empty();
}

int main()
{

    char s[100] = "()[]{}";
    if (isValid(s))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }

    return 0;
}
