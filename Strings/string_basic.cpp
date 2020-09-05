/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1("hello");

    string s2 = "hello world";

    string s3(s2); // string s2 copy into string s3

    string s4 = s3;

    cout << s0 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    // function for empty string or not

    if (s0.empty())
    {
        cout << "S0 is an empty string" << endl;
    }
    // append

    s0.append("I Love c++:");
    cout << s0 << endl;
    s0 += "and python";
    cout << s0 << endl;
    return 0;
}