/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool comparator(int a, int b)
{
    // reverse order sorted
    cout << "Comparing " << a << " and " << b << endl;
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, comparator);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " , ";
    }
    cout << "END";

    return 0;
}