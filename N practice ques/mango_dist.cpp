/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int findWay(int n, int r)
{
    int ans = 1;
    if (r > n - r)
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

int calculate_Ways(int mango, int person)
{
    if (person < mango)
    {
        return 0;
    }
    int ways = findWay(mango + person - 1, mango - 1);
    return ways;
}

int main()
{
    int mango;
    int person;
    cin >> mango;
    cin >> person;

    cout << calculate_Ways(mango, person);
    return 0;
}