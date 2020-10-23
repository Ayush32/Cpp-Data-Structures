/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    char s[1000];
    cin.getline(s, 1000);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
        {
            s[i] = '%';
        }

        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] && s[i] <= 'Z'))
        {
            s[i] = '#'
        }
    }
}