#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tn = INT_MAX, tn1 = 0, tn2 = 0;
    for (int i = 0; i < n; i++)
    {
        int ct = (arr[i] & tn);
        tn ^= ct;
        int ct1 = (arr[i] & tn1);
        tn1 ^= ct1;
        int ct2 = (arr[i] & tn2);
        tn2 ^= ct2;
        tn |= ct2;
        tn1 |= ct;
        tn2 |= ct1;
    }
    cout << tn1 << endl;
    return 0;
}

/*
time - O(n)
space - O(1) + space to store array
*/

/*
1. we have tp = INT_MAX implies that all 32 bit will be set. signifying that it dose not have any extra multiple bit
tn = 1 1 1 1 1 1

these bit are not set stating that there is no extra number repeating less then thrice .
tn1 = 0 0 0 0 0 0     - no number occurring one
tn2 = 0 0 0 0 0 0     - no number occurring twice


51  =  1 1 0 0 1 1
57 =   1 1 1 0 0 1
51 =   1 1 0 0 1 1
------------------------
**lets count the bit for each column
      3 3 1 0 2 3
tn =  1 1 0 0 0 1
th1=  0 0 1 0 0 0
tn2 = 0 0 0 0 1 0
-------------------------
57 =   1 1 1 0 0 1
63 =   1 1 1 1 1 1

similary tn values are updated and at last you get the number which is not repeated thrice but once
*/
