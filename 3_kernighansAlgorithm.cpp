/*
It is used to find number of ON bit
eg : 110001
no of set bit is 3
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int counter = 0;
    while (n > 0)
    {
        counter++;
        int mask = n & (-1 * n);
        // 1. n ^= (mask);
        // or you can subtract that value
        n -= mask;
    }
    cout << counter;
    return 0;
}

/*
expected answer
n = 12
bits = 1100
ans = 2

n=  13
bits = 1101
ans = 3
*/