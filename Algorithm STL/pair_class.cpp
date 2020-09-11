/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    pair<int, char> p;
    p.first = 10;
    p.second = 'A';

    cout << p.first << " ";
    cout << p.second << endl;

    // another way

    pair<int, char> p2(p);
    cout << p2.first << " ";
    cout << p2.second << endl;

    pair<int, string> p3 = make_pair(100, "Audi");
    cout << p3.first << " " << p3.second << endl;

    // input in pair

    int a, b;
    cin >> a >> b;

    pair<int, int> p4(a, b);
    cout << p4.first << " " << p4.second << endl;
}