/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int nthprime(int n)
{
    int i, j, count = 0, flag = 0;
    int ans = 0;
    for (i = 2; i > 0; i++)
    {
        flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
        if (count == n)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << nthprime(n);
    return 0;
}