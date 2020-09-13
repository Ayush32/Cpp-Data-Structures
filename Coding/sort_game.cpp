/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else
    {
        return p1.second > p2.second;
    }
}

int main()
{
    int min_salary, n;
    pair<string, int> emp[10000];
    cin >> min_salary;
    cin >> n;

    int salary;
    string name;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> salary;

        emp[i].first = name;
        emp[i].second = salary;
    }
    sort(emp, emp + n, compare);
    for (int j = 0; j < n; j++)
    {
        if (emp[j].second >= min_salary)
        {
            cout << emp[j].first << " " << emp[j].second << endl;
        }
    }
    return 0;
}