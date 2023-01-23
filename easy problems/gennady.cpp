#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s1;
    string ans = "NO";
    for (int i = 0; i < 5; i++)
    {
        cin >> s1;
        if (s1[0] == s[0] || s1[1] == s[1])
        {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}