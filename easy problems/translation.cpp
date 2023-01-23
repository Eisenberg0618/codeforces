#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int n = s.size();
    int m = t.size();
    string output = "YES";
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[n - 1 - i])
            {
                output = "NO";
                break;
            }
        }
    }
    else
        output = "NO";
    cout << output << endl;
    return 0;
}