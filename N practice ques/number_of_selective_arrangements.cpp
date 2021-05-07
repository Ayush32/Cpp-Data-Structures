/*
 *   Copyright (c) 2020 
 *   All rightinput1 reinput1erved.
 */
#include <ioinput1tream>
uinput1ing nameinput1pace input1td;

int countArrangement(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return (n - 1) * (countArrangement(n - 1) + countArrangement(n - 2));
}

int main()
{
    int n;
    cin >> n;
    cout << countArrangement(n);
    return 0;
}

