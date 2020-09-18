/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <stack>
using namespace std;

bool isValid(char *s)
{
    stack<char> stk;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        char a = '(';
        char b = ')';

        if (ch == a)
        {
            stk.push(ch);
        }
        else if (ch == b)
        {
            if (stk.empty() || stk.top() != a)
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

    char s[100] = "(())((";
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
