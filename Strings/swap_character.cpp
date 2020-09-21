/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void swapping(string s)
{
    int l = s.length();

    if (l % 2 != 0)
    {
        cout << " Not Possible Swapping";
    }
    if (l % 2 == 0)

        for (int i = 0; i <= l; i += 2)
        {

            swap(s[i], s[i + 1]);
        }
    cout << s << endl;
}

int main()
{

      string s;
    cin >> s;

    swapping(s);
}