#include <bits/stdc++.h>
using namespace std;
string changeCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = (islower(s[i]) ? toupper(s[i]) : tolower(s[i]));
    }
    return s;
}
int main()
{
    string s1;
    cin >> s1;
    bool accidental = 1;
    unsigned int idx = 0;
    while (idx++ <= s1.size())
    {
        if (islower(s1[idx]))
        {
            accidental = 0;
            break;
        }
    }
    cout << (accidental ? changeCase(s1) : s1) << endl;
    return 0;
}