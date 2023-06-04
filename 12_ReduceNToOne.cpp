#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else if (n == 3)
            n -= 1;
        else if ((n & 3) == 1)
            n -= 1;
        else if ((n & 3) == 3)
            n += 1;
        ans++;
    }
    cout << ans;
    return 0;
}