/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    char a[1000];
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
    }
    if (isPalindrome(a))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}