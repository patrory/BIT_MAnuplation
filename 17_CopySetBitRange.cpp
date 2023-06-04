#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int mask = 1;
    mask = (mask << (abs(b - a) + 1));
    mask -= 1;
    mask = (mask << (min(a, b) - 1));
    mask = (mask & n);
    cout << (m | mask);

    return 0;
}