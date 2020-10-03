/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
int lengthOfLastWord(string s)
{
    int count = 0;
    bool flag = false;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            flag = true;
            count++;
        }
        else
        {
            if (flag == true)
            {
                return count;
            }
        }
    }
    return count;
}

int main()
{
    string s;
    getline(cin, s);

    cout << lengthOfLastWord(s) << endl;
    return 0;
}