/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
using namespace std;

int triplets(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[j])
                count++;
            else
                ans += count;
        }
    }
    return count;
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
    cout << triplets(arr, n);

    return 0;
}
