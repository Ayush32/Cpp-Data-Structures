#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        int arr[100000];
        int max_straight_sum = INT_MIN;
        int min_straight_sum = INT_MAX;
        int arr_sum = 0;
        int temp_maxSum = 0;
        int temp_minSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr_sum += arr[i];
            temp_maxSum += arr[i];
            max_straight_sum = max_straight_sum < temp_maxSum ? temp_maxSum : max_straight_sum;
            temp_maxSum = temp_maxSum < 0 ? 0 : temp_maxSum;

            temp_minSum += arr[i];
            min_straight_sum = min_straight_sum > temp_minSum ? temp_minSum : min_straight_sum;
            temp_minSum = temp_minSum > 0 ? 0 : temp_minSum;
        }
        if (arr_sum == min_straight_sum)
        {
            cout << max_straight_sum;
        }
        else
        {
            cout << max(max_straight_sum, (arr_sum - min_straight_sum));
        }
    }
    return 0;
}