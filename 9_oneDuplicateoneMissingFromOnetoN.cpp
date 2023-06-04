#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int a = 0, b = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
        ans ^= i;
    cout << "\nans " << ans << endl;
    int rsb = (ans & (-ans));
    cout << "rsb " << rsb << endl;
    for (int i = 0; i < n; i++)
    {
        if (rsb & arr[i])
            a ^= arr[i];
        else
            b ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (rsb & i)
            a ^= i;
        else
            b ^= i;
    }

    cout << "a " << a << " b " << b;
    return 0;
}