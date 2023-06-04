#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int od = 0x55555555;
    int en = 0xAAAAAAAA;
    int odd = (n & od), even = (n & en);
    odd <= 1;
    even >>= 1;
    n = (odd | even);
    cout << n;
    return 0;
}