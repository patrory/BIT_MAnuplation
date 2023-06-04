#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12;
    int mask = -1 * n;
    int rsb = (n & mask);
    cout << rsb;
    return 0;
}