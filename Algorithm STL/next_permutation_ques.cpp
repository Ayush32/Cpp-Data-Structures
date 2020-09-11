#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;

		cin >> n;
		int arr[n];

		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}

		next_permutation(arr, arr + n);
		for (int x = 0; x < n; x++)
		{
			cout << arr[x] << " ";
		}
		cout << endl;
	}

	return 0;
}