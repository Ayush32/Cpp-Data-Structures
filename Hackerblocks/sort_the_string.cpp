/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

string extractStringAtKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        ans += ((str[i] - '0') * p);
        p = p * 10;
    }
    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return convertToInt(key1) < convertToInt(key2);
}
bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}

int main()
{
    int n;
    cin >> n;
    cin.get();
    string a[1000];

    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    int key;
    string reversal, ordering;

    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].first = extractStringAtKey(a[i], key);
    }
    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
    else

    {
        strcm
        sort(strPair, strPair + n, numericCompare);
    }
    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    // print out the output;

    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << " ";
    }
    return 0;
}
