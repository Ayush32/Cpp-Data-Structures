/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;
// cin.get() reads a single character
// put a loop to read chracters till you get a new line '\n'
// methods to create input sentence

// creating readline fucntion

// void readLine(char a[], int maxlen, int delimeter = '\n')
// {
//     int i = 0;
//     char ch = cin.get();
//     while (ch != delimeter)
//     {
//         a[i] = ch;
//         i++;
//         if (i == (maxlen - 1))
//         {
//             break;
//         }
//         ch = cin.get();
//     }
//     a[i] = '\0';
//     return;
// }
int main()
{
    char a[1000];
    cin.getline(a, 1000, '$');
    cout << a << endl;
    return 0;
}