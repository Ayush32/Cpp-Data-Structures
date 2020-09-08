/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void split_number(int num, vector<int> &result)
{
    if (num > 0)
    {
        split_number(num / 10, result);
        result.push_back(num % 10);
    }
}
void add(vector<int> a, vector<int> b, vector<int> &result)
{
    int m = a.size(), n = b.size();

    // loop till a or b runs out
    int i = 0;
    while (i < m && i < n)
    {
        // get sum of next element from each array
        int sum = a[i] + b[i];

        // separate the digits of sum and add them to output vector
        split_number(sum, result);

        i++;
    }
    while (i < m)
    {
        split_number(a[i++], result);
    }

    // process remaining elements of second vector, if any
    while (i < n)
    {
        split_number(b[i++], result);
    }
}
int main()
{
    // input vectors
    int m;
    int n;
    int value;
    vector<int> a;

    vector<int> b;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> value;
        a.push_back(value);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        b.push_back(value);
    }

    // vector to store the output
    vector<int> result;
    add(a, b, result);

    // print the output vector
    for (int i : result)
        cout << i << " ";

    return 0;
}