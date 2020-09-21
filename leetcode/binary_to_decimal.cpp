/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    bitset<8> bits("1000");
    int ab = bits.to_ulong();
    cout << ab << "\n";

    return 0;
}