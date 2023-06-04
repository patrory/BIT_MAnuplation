#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Min Xor
    sort(arr, arr + n);
    int mina = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        mina = min(mina, arr[i] ^ arr[i + 1]);
    }
    cout << "minmum xor : " << mina;
    return 0;
}