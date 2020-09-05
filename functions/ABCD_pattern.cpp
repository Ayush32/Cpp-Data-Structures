/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

/*
ABCDE
ABCD
ABC
AB
A
*/

void printABCDpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        int cnt_alphabet = n - i + 1;
        char alphabet = 'A';

        for (int j = 1; j <= cnt_alphabet; j++)
        {
            cout << alphabet;
            alphabet = alphabet + 1;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printABCDpattern(n);
    return 0;
}