#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (((n - 1) & n))
        cout << "NOT power";
    else
        cout << "power of 2";
    return 0;
}