/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

void printunique(char *s)
{

    int unique[NO_OF_CHARS];
    int i;
    for (i = 0; *(s + i); i++)
    {
        if (*(s + 1) != ' ')
        {
            unique[*(s + i)]++;
        }
    }
    int n = i;
    for (i = 0; i < n; i++)
    {
        if (unique[*(s + i)] == 1)
        {
            cout << s[i];
        }
    }
}

int main()
{
    char s[100];
    cin.getline(s, 1000);
    printunique(s);
    return 0;
}