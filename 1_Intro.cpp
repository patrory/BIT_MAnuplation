#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, m;
    cin >> n >> i >> j >> k >> m;

    int onmask = (1 << i);
    int offmask = ~(1 << j);
    int togglemask = (1 << k);
    int cmask = (1 << m);
    cout << " onMask " << (onmask | n) << "\nOffmask : " << (n & offmask) << "\ntoggle" << (togglemask ^ n) << "\ncheck mask" << (cmask & n);
    return 0;
}