/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// char *ptr = strtok\\

char *mystrtok(char *str, char delimeter)
{
    // string and single char acts as delimeter.

    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }

    if (input == NULL)
    {
        return NULL;
    }
    // start extracting token
    char *output = new char[strlen(input) + 1];

    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delimeter)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "Today is a rainy day";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
}
