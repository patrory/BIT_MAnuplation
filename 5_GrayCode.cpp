/*
Gray Bit
2 bit
00
01
10
11

3 bit
000
001
010
011
111
110
100
101
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> gray(int n)
{
    if (n == 1)
    {
        vector<string> ans = {"0", "1"};
        return ans;
    }
    vector<string> temp = gray(n - 1);
    vector<string> ans;
    int x = temp.size();
    for (int i = 0; i < x; i++)
    {
        string s = "0";
        s.append(temp[i]);
        ans.push_back(s);
    }
    for (int i = x - 1; i >= 0; i--)
    {
        string s = "1";
        s.append(temp[i]);
        ans.push_back(s);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> ans = gray(n);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}