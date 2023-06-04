#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int o = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int oo = ((~t) & o & (~arr[i])) | ((~t) & (~o) & arr[i]);
        int tt = (t & (~o) & (~arr[i])) | ((~t) & o & arr[i]);
        o = oo;
        t = tt;
    }
    cout << o << endl;
    return 0;
}