#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        int idx = s.size() - 1;
        while (idx >= 0)
        {
            idx--;
            if (s[idx] == 'B' && s[idx + 1] == 'G')
            {
                s[idx] = 'G';
                s[idx + 1] = 'B';
                idx--;
            }
        }
    }
    cout << s;
    return 0;
}