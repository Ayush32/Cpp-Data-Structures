/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
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

    // remove or erase the content the string
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    // compare the two string
    s0 = "Apple";
    s1 = "Mango";
    cout << s1.compare(s0) << endl;
    // print 0 if equal
    cout << s1.compare(s1) << endl;

    // overloaded operator
    if (s0 > s1)
    {
        cout << "mango is lexi greater than apple" << endl;
    }

    // find substrings

    string s = "I want to have apple juice";

    int index = s.find("apple");
    cout << index << endl;

    // remove a word from string

    string word = "apple";

    int len = word.length();
    cout << s << endl;
    s.erase(index, len + 1);
    cout << s << endl;

    // iterate over the string;
    string st = "ayush gupta";
    for (int i = 0; i < st.length(); i++)
    {
        cout << st[i] << ":" << endl;
        ;
    }

    // iterators  begin - index 0, end- last index

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << (*it) << endl;
    }
    // reverse a string
    for (auto it1 = st.rbegin(); it1 != st.rend(); it1++)
    {
        cout << *it1 << endl;
    }
    //  reverse a string
    string rev = "Avengers";
    reverse(rev.begin(), rev.end());
    cout << rev << endl;

    string ss = "strawberry";

    // foreach oop
    for (auto c : ss)
    {
        cout << c << "." << endl;
    }

    // sort string
    string Sorting = "bbccaasdsadfafaa";
    sort(Sorting.begin(), Sorting.end());
    cout << Sorting << endl;

    return 0;
}