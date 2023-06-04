/*
find the count of number in range 1 to N-1
where it has same set of bit
for eg 12 -  1100

1- 0001
2- 0010
3 -0011
4- 0100
5 -0101
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long ncr(long n, long r)
{
    if (r > n)
        return 0;
    long res = 1;
    for (long i = 0l; i < r; i++)
    {
        res = res * (n - i);
        res /= (i + 1);
    }
    return res;
}
int solve(long n, int k, int i)
{
    if (i == 0)
        return 0;
    long mask = (1l << i);
    long res = 0;
    if ((n & mask) == 0)
    {
        res = solve(n, k, i - 1);
    }
    else
    {
        long res1 = solve(n, k - 1, i - 1);
        long res2 = ncr(i, k);
        res = res1 + res2;
    }
    return res;
}

int countSetBit(long n)
{
    int ans = 0;
    while (n > 0)
    {
        n -= (n & (-n));
        ans++;
    }
    return ans;
}
int countbit(long n)
{
    int ans = 0;
    while (n > 0)
    {
        n = (n >> 1);
        ans++;
    }
    return ans;
}
int main()
{
    long n;
    cin >> n;
    int bits = countSetBit(n);
    int bit = countbit(n);
    cout << bits << endl;
    int ans = solve(n, bits, bit);
    cout << ans;
    return 0;
}