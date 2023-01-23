#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 2 * n;
        int a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a, a + m);
        cout << a[n] - a[n - 1] << endl;
    }
    return 0;
}