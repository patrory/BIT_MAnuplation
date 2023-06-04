/*
given 4 element
lets say
a b c d
find out the xor of sum of all possible pairs
i.e.
(a+a) xor (a+b) xor (a+c) xor (a+d)
xor (b+a) xor (b+b) xor (b+c) xor (b+d)
xor (c+a) xor (x+b) xor (x+c) xor (c+d) xor
(d+a) xor (d+b) xor (d+c) xor (d+d).

if you look carefully (a+b) , i.e whose pair parenter is diffrent occur twice therefore XOR of them is ZERO
only remaining is

2a xor 2b xor 2c xor 2d

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans ^= (arr[i] << 1); // 2*a ^ 2*b ^ 2*c ^ 2*d
    }
    cout << ans;
    return 0;
}