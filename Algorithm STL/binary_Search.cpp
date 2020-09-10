/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {100, 200, 300, 400, 400, 400, 500, 600};
    int n = sizeof(arr) / sizeof(int);

    // search in sorted array using binary_search function
    int key;
    cin >> key;
    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    // two more things
    // get the index of the element
    // lower_bound(s,e,key) and upper_bound (s,e,key);

    auto lb = lower_bound(arr, arr + n, 400);
    cout << endl
         << "Lower Bound of " << key << " is " << (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, 400);
    cout << endl
         << "Upper Bound of " << key << " is " << (ub - arr);
    //  print frequency

    cout << "Occ Freq of 40 is " << (ub - lb) << endl;

    return 0;
}