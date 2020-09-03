/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

bool compare(int a, int b)
{
    cout << "comparing " << a << " and " << b << endl;
    return a > b;
}

int bubble_sort(int arr[], int n, bool (&cmp)(int a, int b))
{
    // N- 1 large elements to the end
    for (int itr = 1; itr <= n - 1; itr++)
    {
        for (int j = 0; j <= (n - itr - 1); j++)
        {
            if (cmp(arr[j], arr[j + 1]))
                swap(arr[j], arr[j + 1]);
        }
    }
    return 0;
}

int main()
{
    int n;
    int i;
    int arr[1000];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}