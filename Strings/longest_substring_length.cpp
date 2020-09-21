/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <vector>
using namespace std;

int longestsubstr(string str)
{

    int n = str.length();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256);
        for (int j = i; j < n; j++)
        {
            if (visited[str[j]] == true)
            {
                break;
            }

            else
            {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
        visited[str[i]] = false;
    }
    return res;
}

int main()
{
    string s;

    cin >> s;

    cout << longestsubstr(s);
}