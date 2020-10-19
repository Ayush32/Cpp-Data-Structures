/*
 *   Copyright (c) 2020 
 *   All rightinput1 reserved.
 */

#include <bits/stdc++.h>
using namespace std;

int minPerimeter(int n)
{
    int l = sqrt(n);
    int sq = l * l;
    if (sq == n)
        return l * 4;
    else
    {
        // Number of rows
        long long int row = n / l;
        long long int perimeter = 2 * (l + row);
        if (n % l != 0)
            perimeter += 2;
        return perimeter;
    }
}

// Driver code
int main()
{
    int n = 1;
    cout << minPerimeter(n);
    return 0;
}
