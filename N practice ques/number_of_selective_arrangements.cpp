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

int i,j,k,l,count;
count = 0;
for (i = 0; i < input2; i++)
{
    if (input1[i] != ' ' || input1[i] != '\n')
    {
        for (j = i; j < input2; j++)
        {
            if (input1[j] == ' ' || input1[j] == '\n')
                break;
        }
    }
    for (k = i, l = j - 1;;)
    {
        if (input1[k] != input1[l])
            break;
        else if (k >= l)
        {
            count = count + 1;
            break;
        }
        else
        {
            k = k + 1;
            l = l - 1;
            continue;
        }
    }
    i = j;
}
return count;
