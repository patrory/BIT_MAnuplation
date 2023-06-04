#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
coutning number of bits from 1 to N */

int solve(int n)
{
    if (n <= 1)
        return n;
    int x = (int)log2(n);
    int ans = (1 << (x - 1)) * x + (n - (1 << x) + 1) + solve(n - (1 << x));
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans;
    return 0;
}