/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printReverseSpellings(int n)
{
    // base case

    if (n == 0)
    {
        return;
    }

    // recursive case
    int digit = n % 10;
    cout << words[digit] << " ";
    printReverseSpellings(n / 10);

    return;
}

int main()
{
    int n;
    cin >> n;

    printReverseSpellings(n);

    return 0;
}