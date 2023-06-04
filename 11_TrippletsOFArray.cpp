/*
Given an array
find i , j , k
such that
x = arr[i] ^ arr[i+1] ^ .. arr[j-1]
y = arr[j] ^ arr[j+1]^...arr[k]
then x == y
print the number of triplets
*/
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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            val ^= arr[j];
            if (val == 0)
                ans += (j - i);
        }
    }
    cout << ans;
    return 0;
}
