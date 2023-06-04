#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a = 0, b = 0;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans ^= (arr[i]);
    }
    int rsb = (ans & (-ans));
    for (int i = 0; i < n; i++)
    {
        if (rsb & arr[i])
            a ^= (arr[i]);
        else
            b ^= arr[i];
    }
    cout << "Number occuring once are " << a << " & " << b << endl;
    return 0;
}