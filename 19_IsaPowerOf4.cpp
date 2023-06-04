#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int check = 0b01010101010101010101010101010101;
    if ((n & (n - 1)) == 0)
    {
        if (check & n)
            cout << "YES";
    }
    return 0;
}