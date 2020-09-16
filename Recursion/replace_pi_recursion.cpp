/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void replacePi(char a[], int i)
{
    //  base case

    if (a[i] == '\0' or a[i + 1] == '\0')
    {
        return;
    }
    // look for pi at ciurrent location
    if (a[i] == 'p' && a[i + 1] == 'i')
    {
        // shifting + replacement with 3.14
        int j = i + 2;
        //  take j t the end of the array
        while (a[j] != '\0')
        {
            j++;
        }
        // shifting
        while (j >= i + 2)
        {
            a[j + 2] = a[j];
            j--;
        }

        // replacement + recursive call for rem part
        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';
        replacePi(a, i + 4);
    }
    else
    {
        // got to the next position
        replacePi(a, i + 1);
    }
}

int main()
{
    char a[1000];
    cin >> a;
    replacePi(a, 0);
    cout << a << endl;

    return 0;
}