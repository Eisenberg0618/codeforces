#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool letters[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        letters[s[i] - 'a'] = 1;
    }
    int res = 0;
    for (int i = 0; i < 26; i++)
    {
        res += letters[i];
    }
    cout << ((res % 2) ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}