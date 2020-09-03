/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Largest " << largest << endl;
    cout << "Smallest " << smallest << endl;
}