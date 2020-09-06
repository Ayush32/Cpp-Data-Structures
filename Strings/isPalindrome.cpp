#include <iostream>
#include <cstring>
using namespace std;

void Palindrome(int a[], int n)
{
    int flag = 0;
    int i;

    for (int i = 0; i < n / 2 && n != 0; i++)
    {
        if (a[n - i - 1] != a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}

int main()
{
    int n;
    cin >> n;

    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Palindrome(a, n);
    return 0;
}