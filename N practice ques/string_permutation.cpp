/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
const int MAX = 256;

bool canMakestr2(string s1, string s2)
{
    int count[MAX] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (count[s2[i]] == 0)
        {
            return false;
        }
        else
        {
            count[s2[i]]--;
        }
    }
    return true;
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    if (canMakestr2(s1, s2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}