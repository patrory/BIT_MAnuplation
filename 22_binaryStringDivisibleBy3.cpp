#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
find the sum of bits at odd and even
then diffrence
if difference divisible by 11 (binary 3) them divisible
*/
int main()
{
    string s;
    cin >> s;
    int even = 0, odd = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i & 1)
            odd += (s[i] - '0');
        else
            even += (s[i] - '0');
    }
    int delta = even - odd;
    if (delta % 11 == 0)
        cout << "true";
    else
        cout << "false";
    return 0;
}