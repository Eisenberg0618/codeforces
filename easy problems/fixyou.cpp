#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        vector<string> s(n);
        int count = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
            count += (s[i][m - 1] == 'R');
        for (int i = 0; i < m; i++)
            count += (s[n - 1][i] == 'D');
        cout << count << endl;
    }
    return 0;
}