/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <iostream>
using namespace std;

int store_occ(int a[], int i, int n, int key, int out[], int j)
{
    if (i == n)
    {
        return j;
    }

    if (a[i] == key)
    {
        out[j] = i;
        return store_occ(a, i + 1, n, key, out, j + 1);
    }
    // j remain unchanges of the key is not present
    return store_occ(a, i + 1, n, key, out, j);
}

void all_occ(int a[], int i, int n, int key)
{
    if (i == n)
    {
        return;
    }

    if (a[i] == key)
    {
        cout << i << ",";
    }
    all_occ(a, i + 1, n, key);
}

int last_occurence(int a[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[n - 1] == key)
    {
        return n - 1;
    }

    int i = last_occurence(a, n - 1, key);
    if (i == -1)
    {
        return -1;
    }
    return i;
    ;
}
int first_occurence(int a[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[0] == key)
    {
        return 0;
    }
    int i = first_occurence(a + 1, n - 1, key);
    if (i == -1)
    {
        return -1;
    }
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << first_occurence(arr, n, key);
    cout << endl;
    cout << last_occurence(arr, n, key);
    cout << endl;
    all_occ(arr, 0, n, key);

    int output[100];
    int cnt = store_occ(arr, 0, n, key, output, 0);
    cout << "count " << cnt << endl;
    for (int k = 0; k < cnt; k++)
    {
        cout << output[k] << ",";
    }
    return 0;
}