#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void solve(vector<int> &people, int skill, int countPeople, int mask, vector<int> &sol)
{
    if (countPeople == people.size())
    {

        if (skill == mask)
            ans = sol;

        return;
    }

    sol.push_back(people[countPeople]);
    solve(people, skill, countPeople + 1, (mask | people[countPeople]), sol);
    sol.pop_back();
    solve(people, skill, countPeople + 1, mask, sol);
}
int main()
{
    int n, cp;
    cin >> n;
    map<string, int> m;
    int count = 0, skill = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = i;
        skill = (skill | (1 << i));
    }
    cout << "skill " << skill << endl;
    vector<vector<string>> skills;
    cin >> cp;
    for (int i = 0; i < cp; i++)
    {
        vector<string> person;
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            string s;
            cin >> s;
            person.push_back(s);
        }
        skills.push_back(person);
    }

    vector<int> people;
    for (auto i : skills)
    {
        int x = 0;
        for (auto j : i)
        {
            x = x | (1 << m[j]);
        }
        people.push_back(x);
    }
    vector<int> answer;
    cout << "start\n";
    solve(people, skill, 0, 0, answer);
    cout << ans.size();
    return 0;
}