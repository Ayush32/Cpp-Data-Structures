/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[1000];
    char largest[1000];
    cin.get();
    int len = 0;
    int larget_len = 0;
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        // cout << a << endl;
        int len = strlen(a);
        if (len > larget_len)
        {
            larget_len = len;
            strcpy(largest, a); // copy the a char array into largest array
        }
    }
    cout << largest << " and " << larget_len << endl;
    return 0;
}