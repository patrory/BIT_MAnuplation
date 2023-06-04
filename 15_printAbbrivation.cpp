#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < (1 << n); i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int b = n - 1 - j;
            if ((i & (1 << b)) == 0)
            {
                if (count == 0)
                {
                    cout << s[j];
                }
                else
                {
                    cout << count << s[j];
                    count = 0;
                }
            }
            else
            {
                count++;
            }
        }
        if (count)
        {
            cout << count;
        }
        cout << endl;
    }
    return 0;
}