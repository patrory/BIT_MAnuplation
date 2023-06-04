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
    long res = 0;
    for (int i = 0; i < 32; i++)
    {
        long count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] & (1 << i))
                count++;
        }
        res += (2 * count * (n - count));
    }
    cout << res;
    return 0;
}