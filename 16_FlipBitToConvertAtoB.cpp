#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, ans(0);
    cin >> a >> b;
    int x = a ^ b;
    while (x > 0)
    {
        x -= (x & (-x));
        ans++;
    }
    cout << ans;
    return 0;
}