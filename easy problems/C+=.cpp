#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, n;
    while (t--)
    {
        int res = 0;
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;
            res++;
        }
        cout << res << endl;
    }
    return 0;
}