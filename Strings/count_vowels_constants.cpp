/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    char line[150];

    int vowels = 0;
    int contants = 0;
    int digits = 0;
    ;

    cin.getline(line, 150);

    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
        {
            vowels++;
        }

        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            contants++;
        }

        else if (line[i] >= '0' && line[i] <= '9')
        {
            digits++;
        }
    }

    cout << "vowels " << vowels << endl;
    cout << "constants " << contants << endl;
    cout << "digits " << digits << endl;
}