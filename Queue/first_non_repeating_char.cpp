/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<char> q;
    int freq[27] = {0};

    // running a stream until a '.'

    char ch;

    cin >> ch;

    while (ch != '.')
    {
        // logic will go here
        // insert in the q and f table

        q.push(ch);

        freq[ch - 'a']++;
        // query

        while (!q.empty())
        {
            int idx = q.front() - 'a';

            if (freq[idx] > 1)
            {
                q.pop();
            }

            else
            {
                cout << q.front() << endl;
                break;
            }
        }
        if (q.empty())
        {
            cout << " -1" << endl;
        }
        cin >> ch;
    }
    // q is empty

    return 0;
}