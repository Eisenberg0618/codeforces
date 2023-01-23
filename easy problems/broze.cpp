#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int idx = 0;
    while (idx < s.size())
    {
        if (s[idx] == '.')
        {
            cout << 0;
        }
        else if (s[idx] == '-' && s[idx + 1] == '.')
        {
            cout << 1;
            idx++;
        }
        else if (s[idx] == '-' && s[idx + 1] == '-')
        {
            cout << 2;
            idx++;
        }
        idx++;
    }
    return 0;
}