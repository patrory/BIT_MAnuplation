/*
Every alternate person will be removed find who survives at last
eg 1 2 3 4 5 6
in first pass 2 removed remaining 1 3 4 5 6
then 1 3 5 6
1 3 5
1 5
5
till last only 5 survived so print 5
*/

/*
Solution
represent number = n + l
where n is power of 2 nearest to number
eg if number is 12 then power is 8
if number is 20 then power is 4

the last number to remain is (2*l + 1)
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // the number of people in row
    n = 12;
    // calculating the 2 power
    int power = (int)log2(n);
    // finding the l
    int l = n - pow(2, power);
    cout << (2 * l + 1) << endl;
    return 0;
}