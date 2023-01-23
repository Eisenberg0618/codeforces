#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int Min = 0, res = 0;
    int a = k * l;
    int b = c * d;
    int c1 = a / nl;
    int d1 = p / np;
    Min = min(b, c1);
    int nxt = min(Min, d1);
    res = nxt / n;
    cout << res;
    return 0;
}